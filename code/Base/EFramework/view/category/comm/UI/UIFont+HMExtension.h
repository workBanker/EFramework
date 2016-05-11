//
//  UIFont+HMExtension.h
//  EFExtend
//
//  Created by mac on 15/3/12.
//  Copyright (c) 2015年 Eric. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIFont (HMExtension)
/**
 *  自定义字体注册
 *
 *  @param url 本地完整路径
 */
+ (void)registerIconFontWithURL:(NSURL *)url;

//必须在工程中加入 GoogleMaterial.ttf字体-->>icomoon字体
+ (UIFont *)fontGoogleMaterialWithSize:(CGFloat)size;
//必须在工程中加入 FontAwesome.ttf字体-->>FontAwesome字体
+ (UIFont *)fontAwesomeWithSize:(CGFloat)size;

/*
 + (NSDictionary *)FontAwesome {
 return @{
 @"\uf042" : @"adjust",
 @"\uf170" : @"adn",
 @"\uf037" : @"alignCenter",
 @"\uf039" : @"alignJustify",
 @"\uf036" : @"alignLeft",
 @"\uf038" : @"alignRight",
 @"\uf0f9" : @"ambulance",
 @"\uf13d" : @"anchor",
 @"\uf17b" : @"android",
 @"\uf209" : @"angellist",
 @"\uf103" : @"angleDoubleDown",
 @"\uf100" : @"angleDoubleLeft",
 @"\uf101" : @"angleDoubleRight",
 @"\uf102" : @"angleDoubleUp",
 @"\uf107" : @"angleDown",
 @"\uf104" : @"angleLeft",
 @"\uf105" : @"angleRight",
 @"\uf106" : @"angleUp",
 @"\uf179" : @"apple",
 @"\uf187" : @"archive",
 @"\uf1fe" : @"areaChart",
 @"\uf0ab" : @"arrowCircleDown",
 @"\uf0a8" : @"arrowCircleLeft",
 @"\uf01a" : @"arrowCircleODown",
 @"\uf190" : @"arrowCircleOLeft",
 @"\uf18e" : @"arrowCircleORight",
 @"\uf01b" : @"arrowCircleOUp",
 @"\uf0a9" : @"arrowCircleRight",
 @"\uf0aa" : @"arrowCircleUp",
 @"\uf063" : @"arrowDown",
 @"\uf060" : @"arrowLeft",
 @"\uf061" : @"arrowRight",
 @"\uf062" : @"arrowUp",
 @"\uf047" : @"arrows",
 @"\uf0b2" : @"arrowsAlt",
 @"\uf07e" : @"arrowsH",
 @"\uf07d" : @"arrowsV",
 @"\uf069" : @"asterisk",
 @"\uf1fa" : @"at",
 @"\uf1b9" : @"automobile",
 @"\uf04a" : @"backward",
 @"\uf05e" : @"ban",
 @"\uf19c" : @"bank",
 @"\uf080" : @"barChart",
 @"\uf080" : @"barChartO",
 @"\uf02a" : @"barcode",
 @"\uf0c9" : @"bars",
 @"\uf0fc" : @"beer",
 @"\uf1b4" : @"behance",
 @"\uf1b5" : @"behanceSquare",
 @"\uf0f3" : @"bell",
 @"\uf0a2" : @"bellO",
 @"\uf1f6" : @"bellSlash",
 @"\uf1f7" : @"bellSlashO",
 @"\uf206" : @"bicycle",
 @"\uf1e5" : @"binoculars",
 @"\uf1fd" : @"birthdayCake",
 @"\uf171" : @"bitbucket",
 @"\uf172" : @"bitbucketSquare",
 @"\uf15a" : @"bitcoin",
 @"\uf032" : @"bold",
 @"\uf0e7" : @"bolt",
 @"\uf1e2" : @"bomb",
 @"\uf02d" : @"book",
 @"\uf02e" : @"bookmark",
 @"\uf097" : @"bookmarkO",
 @"\uf0b1" : @"briefcase",
 @"\uf15a" : @"btc",
 @"\uf188" : @"bug",
 @"\uf1ad" : @"building",
 @"\uf0f7" : @"buildingO",
 @"\uf0a1" : @"bullhorn",
 @"\uf140" : @"bullseye",
 @"\uf207" : @"bus",
 @"\uf1ba" : @"cab",
 @"\uf1ec" : @"calculator",
 @"\uf073" : @"calendar",
 @"\uf133" : @"calendarO",
 @"\uf030" : @"camera",
 @"\uf083" : @"cameraRetro",
 @"\uf1b9" : @"car",
 @"\uf0d7" : @"caretDown",
 @"\uf0d9" : @"caretLeft",
 @"\uf0da" : @"caretRight",
 @"\uf150" : @"caretSquareODown",
 @"\uf191" : @"caretSquareOLeft",
 @"\uf152" : @"caretSquareORight",
 @"\uf151" : @"caretSquareOUp",
 @"\uf0d8" : @"caretUp",
 @"\uf20a" : @"cc",
 @"\uf1f3" : @"ccAmex",
 @"\uf1f2" : @"ccDiscover",
 @"\uf1f1" : @"ccMastercard",
 @"\uf1f4" : @"ccPaypal",
 @"\uf1f5" : @"ccStripe",
 @"\uf1f0" : @"ccVisa",
 @"\uf0a3" : @"certificate",
 @"\uf0c1" : @"chain",
 @"\uf127" : @"chainBroken",
 @"\uf00c" : @"check",
 @"\uf058" : @"checkCircle",
 @"\uf05d" : @"checkCircleO",
 @"\uf14a" : @"checkSquare",
 @"\uf046" : @"checkSquareO",
 @"\uf13a" : @"chevronCircleDown",
 @"\uf137" : @"chevronCircleLeft",
 @"\uf138" : @"chevronCircleRight",
 @"\uf139" : @"chevronCircleUp",
 @"\uf078" : @"chevronDown",
 @"\uf053" : @"chevronLeft",
 @"\uf054" : @"chevronRight",
 @"\uf077" : @"chevronUp",
 @"\uf1ae" : @"child",
 @"\uf111" : @"circle",
 @"\uf10c" : @"circleO",
 @"\uf1ce" : @"circleONotch",
 @"\uf1db" : @"circleThin",
 @"\uf0ea" : @"clipboard",
 @"\uf017" : @"clockO",
 @"\uf00d" : @"close",
 @"\uf0c2" : @"cloud",
 @"\uf0ed" : @"cloudDownload",
 @"\uf0ee" : @"cloudUpload",
 @"\uf157" : @"cny",
 @"\uf121" : @"code",
 @"\uf126" : @"codeFork",
 @"\uf1cb" : @"codepen",
 @"\uf0f4" : @"coffee",
 @"\uf013" : @"cog",
 @"\uf085" : @"cogs",
 @"\uf0db" : @"columns",
 @"\uf075" : @"comment",
 @"\uf0e5" : @"commentO",
 @"\uf086" : @"comments",
 @"\uf0e6" : @"commentsO",
 @"\uf14e" : @"compass",
 @"\uf066" : @"compress",
 @"\uf0c5" : @"copy",
 @"\uf1f9" : @"copyright",
 @"\uf09d" : @"creditCard",
 @"\uf125" : @"crop",
 @"\uf05b" : @"crosshairs",
 @"\uf13c" : @"css3",
 @"\uf1b2" : @"cube",
 @"\uf1b3" : @"cubes",
 @"\uf0c4" : @"cut",
 @"\uf0f5" : @"cutlery",
 @"\uf0e4" : @"dashboard",
 @"\uf1c0" : @"database",
 @"\uf03b" : @"dedent",
 @"\uf1a5" : @"delicious",
 @"\uf108" : @"desktop",
 @"\uf1bd" : @"deviantart",
 @"\uf1a6" : @"digg",
 @"\uf155" : @"dollar",
 @"\uf192" : @"dotCircleO",
 @"\uf019" : @"download",
 @"\uf17d" : @"dribbble",
 @"\uf16b" : @"dropbox",
 @"\uf1a9" : @"drupal",
 @"\uf044" : @"edit",
 @"\uf052" : @"eject",
 @"\uf141" : @"ellipsisH",
 @"\uf142" : @"ellipsisV",
 @"\uf1d1" : @"empire",
 @"\uf0e0" : @"envelope",
 @"\uf003" : @"envelopeO",
 @"\uf199" : @"envelopeSquare",
 @"\uf12d" : @"eraser",
 @"\uf153" : @"eur",
 @"\uf153" : @"euro",
 @"\uf0ec" : @"exchange",
 @"\uf12a" : @"exclamation",
 @"\uf06a" : @"exclamationCircle",
 @"\uf071" : @"exclamationTriangle",
 @"\uf065" : @"expand",
 @"\uf08e" : @"externalLink",
 @"\uf14c" : @"externalLinkSquare",
 @"\uf06e" : @"eye",
 @"\uf070" : @"eyeSlash",
 @"\uf1fb" : @"eyedropper",
 @"\uf09a" : @"facebook",
 @"\uf082" : @"facebookSquare",
 @"\uf049" : @"fastBackward",
 @"\uf050" : @"fastForward",
 @"\uf1ac" : @"fax",
 @"\uf182" : @"female",
 @"\uf0fb" : @"fighterJet",
 @"\uf15b" : @"file",
 @"\uf1c6" : @"fileArchiveO",
 @"\uf1c7" : @"fileAudioO",
 @"\uf1c9" : @"fileCodeO",
 @"\uf1c3" : @"fileExcelO",
 @"\uf1c5" : @"fileImageO",
 @"\uf1c8" : @"fileMovieO",
 @"\uf016" : @"fileO",
 @"\uf1c1" : @"filePdfO",
 @"\uf1c5" : @"filePhotoO",
 @"\uf1c5" : @"filePictureO",
 @"\uf1c4" : @"filePowerpointO",
 @"\uf1c7" : @"fileSoundO",
 @"\uf15c" : @"fileText",
 @"\uf0f6" : @"fileTextO",
 @"\uf1c8" : @"fileVideoO",
 @"\uf1c2" : @"fileWordO",
 @"\uf1c6" : @"fileZipO",
 @"\uf0c5" : @"filesO",
 @"\uf008" : @"film",
 @"\uf0b0" : @"filter",
 @"\uf06d" : @"fire",
 @"\uf134" : @"fireExtinguisher",
 @"\uf024" : @"flag",
 @"\uf11e" : @"flagCheckered",
 @"\uf11d" : @"flagO",
 @"\uf0e7" : @"flash",
 @"\uf0c3" : @"flask",
 @"\uf16e" : @"flickr",
 @"\uf0c7" : @"floppyO",
 @"\uf07b" : @"folder",
 @"\uf114" : @"folderO",
 @"\uf07c" : @"folderOpen",
 @"\uf115" : @"folderOpenO",
 @"\uf031" : @"font",
 @"\uf04e" : @"forward",
 @"\uf180" : @"foursquare",
 @"\uf119" : @"frownO",
 @"\uf1e3" : @"futbolO",
 @"\uf11b" : @"gamepad",
 @"\uf0e3" : @"gavel",
 @"\uf154" : @"gbp",
 @"\uf1d1" : @"ge",
 @"\uf013" : @"gear",
 @"\uf085" : @"gears",
 @"\uf06b" : @"gift",
 @"\uf1d3" : @"git",
 @"\uf1d2" : @"gitSquare",
 @"\uf09b" : @"github",
 @"\uf113" : @"githubAlt",
 @"\uf092" : @"githubSquare",
 @"\uf184" : @"gittip",
 @"\uf000" : @"glass",
 @"\uf0ac" : @"globe",
 @"\uf1a0" : @"google",
 @"\uf0d5" : @"googlePlus",
 @"\uf0d4" : @"googlePlusSquare",
 @"\uf1ee" : @"googleWallet",
 @"\uf19d" : @"graduationCap",
 @"\uf0c0" : @"group",
 @"\uf0fd" : @"hSquare",
 @"\uf1d4" : @"hackerNews",
 @"\uf0a7" : @"handODown",
 @"\uf0a5" : @"handOLeft",
 @"\uf0a4" : @"handORight",
 @"\uf0a6" : @"handOUp",
 @"\uf0a0" : @"hddO",
 @"\uf1dc" : @"header",
 @"\uf025" : @"headphones",
 @"\uf004" : @"heart",
 @"\uf08a" : @"heartO",
 @"\uf1da" : @"history",
 @"\uf015" : @"home",
 @"\uf0f8" : @"hospitalO",
 @"\uf13b" : @"html5",
 @"\uf20b" : @"ils",
 @"\uf03e" : @"image",
 @"\uf01c" : @"inbox",
 @"\uf03c" : @"indent",
 @"\uf129" : @"info",
 @"\uf05a" : @"infoCircle",
 @"\uf156" : @"inr",
 @"\uf16d" : @"instagram",
 @"\uf19c" : @"institution",
 @"\uf208" : @"ioxhost",
 @"\uf033" : @"italic",
 @"\uf1aa" : @"joomla",
 @"\uf157" : @"jpy",
 @"\uf1cc" : @"jsfiddle",
 @"\uf084" : @"key",
 @"\uf11c" : @"keyboardO",
 @"\uf159" : @"krw",
 @"\uf1ab" : @"language",
 @"\uf109" : @"laptop",
 @"\uf202" : @"lastfm",
 @"\uf203" : @"lastfmSquare",
 @"\uf06c" : @"leaf",
 @"\uf0e3" : @"legal",
 @"\uf094" : @"lemonO",
 @"\uf149" : @"levelDown",
 @"\uf148" : @"levelUp",
 @"\uf1cd" : @"lifeBouy",
 @"\uf1cd" : @"lifeBuoy",
 @"\uf1cd" : @"lifeRing",
 @"\uf1cd" : @"lifeSaver",
 @"\uf0eb" : @"lightbulbO",
 @"\uf201" : @"lineChart",
 @"\uf0c1" : @"link",
 @"\uf0e1" : @"linkedin",
 @"\uf08c" : @"linkedinSquare",
 @"\uf17c" : @"linux",
 @"\uf03a" : @"list",
 @"\uf022" : @"listAlt",
 @"\uf0cb" : @"listOl",
 @"\uf0ca" : @"listUl",
 @"\uf124" : @"locationArrow",
 @"\uf023" : @"lock",
 @"\uf175" : @"longArrowDown",
 @"\uf177" : @"longArrowLeft",
 @"\uf178" : @"longArrowRight",
 @"\uf176" : @"longArrowUp",
 @"\uf0d0" : @"magic",
 @"\uf076" : @"magnet",
 @"\uf064" : @"mailForward",
 @"\uf112" : @"mailReply",
 @"\uf122" : @"mailReplyAll",
 @"\uf183" : @"male",
 @"\uf041" : @"mapMarker",
 @"\uf136" : @"maxcdn",
 @"\uf20c" : @"meanpath",
 @"\uf0fa" : @"medkit",
 @"\uf11a" : @"mehO",
 @"\uf130" : @"microphone",
 @"\uf131" : @"microphoneSlash",
 @"\uf068" : @"minus",
 @"\uf056" : @"minusCircle",
 @"\uf146" : @"minusSquare",
 @"\uf147" : @"minusSquareO",
 @"\uf10b" : @"mobile",
 @"\uf10b" : @"mobilePhone",
 @"\uf0d6" : @"money",
 @"\uf186" : @"moonO",
 @"\uf19d" : @"mortarBoard",
 @"\uf001" : @"music",
 @"\uf0c9" : @"navicon",
 @"\uf1ea" : @"newspaperO",
 @"\uf19b" : @"openid",
 @"\uf03b" : @"outdent",
 @"\uf18c" : @"pagelines",
 @"\uf1fc" : @"paintBrush",
 @"\uf1d8" : @"paperPlane",
 @"\uf1d9" : @"paperPlaneO",
 @"\uf0c6" : @"paperclip",
 @"\uf1dd" : @"paragraph",
 @"\uf0ea" : @"paste",
 @"\uf04c" : @"pause",
 @"\uf1b0" : @"paw",
 @"\uf1ed" : @"paypal",
 @"\uf040" : @"pencil",
 @"\uf14b" : @"pencilSquare",
 @"\uf044" : @"pencilSquareO",
 @"\uf095" : @"phone",
 @"\uf098" : @"phoneSquare",
 @"\uf03e" : @"photo",
 @"\uf03e" : @"pictureO",
 @"\uf200" : @"pieChart",
 @"\uf1a7" : @"piedPiper",
 @"\uf1a8" : @"piedPiperAlt",
 @"\uf0d2" : @"pinterest",
 @"\uf0d3" : @"pinterestSquare",
 @"\uf072" : @"plane",
 @"\uf04b" : @"play",
 @"\uf144" : @"playCircle",
 @"\uf01d" : @"playCircleO",
 @"\uf1e6" : @"plug",
 @"\uf067" : @"plus",
 @"\uf055" : @"plusCircle",
 @"\uf0fe" : @"plusSquare",
 @"\uf196" : @"plusSquareO",
 @"\uf011" : @"powerOff",
 @"\uf02f" : @"print",
 @"\uf12e" : @"puzzlePiece",
 @"\uf1d6" : @"qq",
 @"\uf029" : @"qrcode",
 @"\uf128" : @"question",
 @"\uf059" : @"questionCircle",
 @"\uf10d" : @"quoteLeft",
 @"\uf10e" : @"quoteRight",
 @"\uf1d0" : @"ra",
 @"\uf074" : @"random",
 @"\uf1d0" : @"rebel",
 @"\uf1b8" : @"recycle",
 @"\uf1a1" : @"reddit",
 @"\uf1a2" : @"redditSquare",
 @"\uf021" : @"refresh",
 @"\uf00d" : @"remove",
 @"\uf18b" : @"renren",
 @"\uf0c9" : @"reorder",
 @"\uf01e" : @"repeat",
 @"\uf112" : @"reply",
 @"\uf122" : @"replyAll",
 @"\uf079" : @"retweet",
 @"\uf157" : @"rmb",
 @"\uf018" : @"road",
 @"\uf135" : @"rocket",
 @"\uf0e2" : @"rotateLeft",
 @"\uf01e" : @"rotateRight",
 @"\uf158" : @"rouble",
 @"\uf09e" : @"rss",
 @"\uf143" : @"rssSquare",
 @"\uf158" : @"rub",
 @"\uf158" : @"ruble",
 @"\uf156" : @"rupee",
 @"\uf0c7" : @"save",
 @"\uf0c4" : @"scissors",
 @"\uf002" : @"search",
 @"\uf010" : @"searchMinus",
 @"\uf00e" : @"searchPlus",
 @"\uf1d8" : @"send",
 @"\uf1d9" : @"sendO",
 @"\uf064" : @"share",
 @"\uf1e0" : @"shareAlt",
 @"\uf1e1" : @"shareAltSquare",
 @"\uf14d" : @"shareSquare",
 @"\uf045" : @"shareSquareO",
 @"\uf20b" : @"shekel",
 @"\uf20b" : @"sheqel",
 @"\uf132" : @"shield",
 @"\uf07a" : @"shoppingCart",
 @"\uf090" : @"signIn",
 @"\uf08b" : @"signOut",
 @"\uf012" : @"signal",
 @"\uf0e8" : @"sitemap",
 @"\uf17e" : @"skype",
 @"\uf198" : @"slack",
 @"\uf1de" : @"sliders",
 @"\uf1e7" : @"slideshare",
 @"\uf118" : @"smileO",
 @"\uf1e3" : @"soccerBallO",
 @"\uf0dc" : @"sort",
 @"\uf15d" : @"sortAlphaAsc",
 @"\uf15e" : @"sortAlphaDesc",
 @"\uf160" : @"sortAmountAsc",
 @"\uf161" : @"sortAmountDesc",
 @"\uf0de" : @"sortAsc",
 @"\uf0dd" : @"sortDesc",
 @"\uf0dd" : @"sortDown",
 @"\uf162" : @"sortNumericAsc",
 @"\uf163" : @"sortNumericDesc",
 @"\uf0de" : @"sortUp",
 @"\uf1be" : @"soundcloud",
 @"\uf197" : @"spaceShuttle",
 @"\uf110" : @"spinner",
 @"\uf1b1" : @"spoon",
 @"\uf1bc" : @"spotify",
 @"\uf0c8" : @"square",
 @"\uf096" : @"squareO",
 @"\uf18d" : @"stackExchange",
 @"\uf16c" : @"stackOverflow",
 @"\uf005" : @"star",
 @"\uf089" : @"starHalf",
 @"\uf123" : @"starHalfEmpty",
 @"\uf123" : @"starHalfFull",
 @"\uf123" : @"starHalfO",
 @"\uf006" : @"starO",
 @"\uf1b6" : @"steam",
 @"\uf1b7" : @"steamSquare",
 @"\uf048" : @"stepBackward",
 @"\uf051" : @"stepForward",
 @"\uf0f1" : @"stethoscope",
 @"\uf04d" : @"stop",
 @"\uf0cc" : @"strikethrough",
 @"\uf1a4" : @"stumbleupon",
 @"\uf1a3" : @"stumbleuponCircle",
 @"\uf12c" : @"subscript",
 @"\uf0f2" : @"suitcase",
 @"\uf185" : @"sunO",
 @"\uf12b" : @"superscript",
 @"\uf1cd" : @"support",
 @"\uf0ce" : @"table",
 @"\uf10a" : @"tablet",
 @"\uf0e4" : @"tachometer",
 @"\uf02b" : @"tag",
 @"\uf02c" : @"tags",
 @"\uf0ae" : @"tasks",
 @"\uf1ba" : @"taxi",
 @"\uf1d5" : @"tencentWeibo",
 @"\uf120" : @"terminal",
 @"\uf034" : @"textHeight",
 @"\uf035" : @"textWidth",
 @"\uf00a" : @"th",
 @"\uf009" : @"thLarge",
 @"\uf00b" : @"thList",
 @"\uf08d" : @"thumbTack",
 @"\uf165" : @"thumbsDown",
 @"\uf088" : @"thumbsODown",
 @"\uf087" : @"thumbsOUp",
 @"\uf164" : @"thumbsUp",
 @"\uf145" : @"ticket",
 @"\uf00d" : @"times",
 @"\uf057" : @"timesCircle",
 @"\uf05c" : @"timesCircleO",
 @"\uf043" : @"tint",
 @"\uf150" : @"toggleDown",
 @"\uf191" : @"toggleLeft",
 @"\uf204" : @"toggleOff",
 @"\uf205" : @"toggleOn",
 @"\uf152" : @"toggleRight",
 @"\uf151" : @"toggleUp",
 @"\uf1f8" : @"trash",
 @"\uf014" : @"trashO",
 @"\uf1bb" : @"tree",
 @"\uf181" : @"trello",
 @"\uf091" : @"trophy",
 @"\uf0d1" : @"truck",
 @"\uf195" : @"try",
 @"\uf1e4" : @"tty",
 @"\uf173" : @"tumblr",
 @"\uf174" : @"tumblrSquare",
 @"\uf195" : @"turkishLira",
 @"\uf1e8" : @"twitch",
 @"\uf099" : @"twitter",
 @"\uf081" : @"twitterSquare",
 @"\uf0e9" : @"umbrella",
 @"\uf0cd" : @"underline",
 @"\uf0e2" : @"undo",
 @"\uf19c" : @"university",
 @"\uf127" : @"unlink",
 @"\uf09c" : @"unlock",
 @"\uf13e" : @"unlockAlt",
 @"\uf0dc" : @"unsorted",
 @"\uf093" : @"upload",
 @"\uf155" : @"usd",
 @"\uf007" : @"user",
 @"\uf0f0" : @"userMd",
 @"\uf0c0" : @"users",
 @"\uf03d" : @"videoCamera",
 @"\uf194" : @"vimeoSquare",
 @"\uf1ca" : @"vine",
 @"\uf189" : @"vk",
 @"\uf027" : @"volumeDown",
 @"\uf026" : @"volumeOff",
 @"\uf028" : @"volumeUp",
 @"\uf071" : @"warning",
 @"\uf1d7" : @"wechat",
 @"\uf18a" : @"weibo",
 @"\uf1d7" : @"weixin",
 @"\uf193" : @"wheelchair",
 @"\uf1eb" : @"wifi",
 @"\uf17a" : @"windows",
 @"\uf159" : @"won",
 @"\uf19a" : @"wordpress",
 @"\uf0ad" : @"wrench",
 @"\uf168" : @"xing",
 @"\uf169" : @"xingSquare",
 @"\uf19e" : @"yahoo",
 @"\uf1e9" : @"yelp",
 @"\uf157" : @"yen",
 @"\uf167" : @"youtube",
 @"\uf16a" : @"youtubePlay",
 @"\uf166" : @"youtubeSquare",
 
 };
 }
 */
/*
 //Google material design
 gmd_3d_rotation('\ue600'),
 gmd_accessibility('\ue601'),
 gmd_account_balance('\ue602'),
 gmd_account_balance_wallet('\ue603'),
 gmd_account_box('\ue604'),
 gmd_account_child('\ue605'),
 gmd_account_circle('\ue606'),
 gmd_add_shopping_cart('\ue607'),
 gmd_alarm('\ue608'),
 gmd_alarm_add('\ue609'),
 gmd_alarm_off('\ue60a'),
 gmd_alarm_on('\ue60b'),
 gmd_android('\ue60c'),
 gmd_announcement('\ue60d'),
 gmd_aspect_ratio('\ue60e'),
 gmd_assessment('\ue60f'),
 gmd_assignment('\ue610'),
 gmd_assignment_ind('\ue611'),
 gmd_assignment_late('\ue612'),
 gmd_assignment_return('\ue613'),
 gmd_assignment_returned('\ue614'),
 gmd_assignment_turned_in('\ue615'),
 gmd_autorenew('\ue616'),
 gmd_backup('\ue617'),
 gmd_book('\ue618'),
 gmd_bookmark('\ue619'),
 gmd_bookmark_outline('\ue61a'),
 gmd_bug_report('\ue61b'),
 gmd_cached('\ue61c'),
 gmd_class('\ue61d'),
 gmd_credit_card('\ue61e'),
 gmd_dashboard('\ue61f'),
 gmd_delete('\ue620'),
 gmd_description('\ue621'),
 gmd_dns('\ue622'),
 gmd_done('\ue623'),
 gmd_done_all('\ue624'),
 gmd_event('\ue625'),
 gmd_exit_to_app('\ue626'),
 gmd_explore('\ue627'),
 gmd_extension('\ue628'),
 gmd_face_unlock('\ue629'),
 gmd_favorite('\ue62a'),
 gmd_favorite_outline('\ue62b'),
 gmd_find_in_page('\ue62c'),
 gmd_find_replace('\ue62d'),
 gmd_flip_to_back('\ue62e'),
 gmd_flip_to_front('\ue62f'),
 gmd_get_app('\ue630'),
 gmd_grade('\ue631'),
 gmd_group_work('\ue632'),
 gmd_help('\ue633'),
 gmd_highlight_remove('\ue634'),
 gmd_history('\ue635'),
 gmd_home('\ue636'),
 gmd_https('\ue637'),
 gmd_info('\ue638'),
 gmd_info_outline('\ue639'),
 gmd_input('\ue63a'),
 gmd_invert_colors('\ue63b'),
 gmd_label('\ue63c'),
 gmd_label_outline('\ue63d'),
 gmd_language('\ue63e'),
 gmd_launch('\ue63f'),
 gmd_list('\ue640'),
 gmd_lock('\ue641'),
 gmd_lock_open('\ue642'),
 gmd_lock_outline('\ue643'),
 gmd_loyalty('\ue644'),
 gmd_markunread_mailbox('\ue645'),
 gmd_note_add('\ue646'),
 gmd_open_in_browser('\ue647'),
 gmd_open_in_new('\ue648'),
 gmd_open_with('\ue649'),
 gmd_pageview('\ue64a'),
 gmd_payment('\ue64b'),
 gmd_perm_camera_m('\ue64c'),
 gmd_perm_contact_cal('\ue64d'),
 gmd_perm_data_setting('\ue64e'),
 gmd_perm_device_info('\ue64f'),
 gmd_perm_identity('\ue650'),
 gmd_perm_media('\ue651'),
 gmd_perm_phone_msg('\ue652'),
 gmd_perm_scan_wifi('\ue653'),
 gmd_picture_in_picture('\ue654'),
 gmd_polymer('\ue655'),
 gmd_print('\ue656'),
 gmd_query_builder('\ue657'),
 gmd_question_answer('\ue658'),
 gmd_receipt('\ue659'),
 gmd_redeem('\ue65a'),
 gmd_reorder('\ue65b'),
 gmd_report_problem('\ue65c'),
 gmd_restore('\ue65d'),
 gmd_room('\ue65e'),
 gmd_schedule('\ue65f'),
 gmd_search('\ue660'),
 gmd_settings('\ue661'),
 gmd_settings_applications('\ue662'),
 gmd_settings_backup_restore('\ue663'),
 gmd_settings_bluetooth('\ue664'),
 gmd_settings_cell('\ue665'),
 gmd_settings_display('\ue666'),
 gmd_settings_ethernet('\ue667'),
 gmd_settings_input_antenna('\ue668'),
 gmd_settings_input_component('\ue669'),
 gmd_settings_input_composite('\ue66a'),
 gmd_settings_input_hdmi('\ue66b'),
 gmd_settings_input_svideo('\ue66c'),
 gmd_settings_overscan('\ue66d'),
 gmd_settings_phone('\ue66e'),
 gmd_settings_power('\ue66f'),
 gmd_settings_remote('\ue670'),
 gmd_settings_voice('\ue671'),
 gmd_shop('\ue672'),
 gmd_shop_two('\ue673'),
 gmd_shopping_basket('\ue674'),
 gmd_shopping_cart('\ue675'),
 gmd_speaker_notes('\ue676'),
 gmd_spellcheck('\ue677'),
 gmd_star_rate('\ue678'),
 gmd_stars('\ue679'),
 gmd_store('\ue67a'),
 gmd_subject('\ue67b'),
 gmd_supervisor_account('\ue67c'),
 gmd_swap_horiz('\ue67d'),
 gmd_swap_vert('\ue67e'),
 gmd_swap_vert_circle('\ue67f'),
 gmd_system_update_tv('\ue680'),
 gmd_tab('\ue681'),
 gmd_tab_unselected('\ue682'),
 gmd_theaters('\ue683'),
 gmd_thumb_down('\ue684'),
 gmd_thumb_up('\ue685'),
 gmd_thumbs_up_down('\ue686'),
 gmd_toc('\ue687'),
 gmd_today('\ue688'),
 gmd_track_changes('\ue689'),
 gmd_translate('\ue68a'),
 gmd_trending_down('\ue68b'),
 gmd_trending_neutral('\ue68c'),
 gmd_trending_up('\ue68d'),
 gmd_turned_in('\ue68e'),
 gmd_turned_in_not('\ue68f'),
 gmd_verified_user('\ue690'),
 gmd_view_agenda('\ue691'),
 gmd_view_array('\ue692'),
 gmd_view_carousel('\ue693'),
 gmd_view_column('\ue694'),
 gmd_view_day('\ue695'),
 gmd_view_headline('\ue696'),
 gmd_view_list('\ue697'),
 gmd_view_module('\ue698'),
 gmd_view_quilt('\ue699'),
 gmd_view_stream('\ue69a'),
 gmd_view_week('\ue69b'),
 gmd_visibility('\ue69c'),
 gmd_visibility_off('\ue69d'),
 gmd_wallet_giftcard('\ue69e'),
 gmd_wallet_membership('\ue69f'),
 gmd_wallet_travel('\ue6a0'),
 gmd_work('\ue6a1'),
 gmd_error('\ue6a2'),
 gmd_warning('\ue6a3'),
 gmd_album('\ue6a4'),
 gmd_av_timer('\ue6a5'),
 gmd_closed_caption('\ue6a6'),
 gmd_equalizer('\ue6a7'),
 gmd_explicit('\ue6a8'),
 gmd_fast_forward('\ue6a9'),
 gmd_fast_rewind('\ue6aa'),
 gmd_games('\ue6ab'),
 gmd_hearing('\ue6ac'),
 gmd_high_quality('\ue6ad'),
 gmd_loop('\ue6ae'),
 gmd_mic('\ue6af'),
 gmd_mnone('\ue6b0'),
 gmd_moff('\ue6b1'),
 gmd_movie('\ue6b2'),
 gmd_my_library_add('\ue6b3'),
 gmd_my_library_books('\ue6b4'),
 gmd_my_library_mus('\ue6b5'),
 gmd_new_releases('\ue6b6'),
 gmd_not_interested('\ue6b7'),
 gmd_pause('\ue6b8'),
 gmd_pause_circle_fill('\ue6b9'),
 gmd_pause_circle_outline('\ue6ba'),
 gmd_play_arrow('\ue6bb'),
 gmd_play_circle_fill('\ue6bc'),
 gmd_play_circle_outline('\ue6bd'),
 gmd_play_shopping_bag('\ue6be'),
 gmd_playlist_add('\ue6bf'),
 gmd_queue('\ue6c0'),
 gmd_queue_mus('\ue6c1'),
 gmd_radio('\ue6c2'),
 gmd_recent_actors('\ue6c3'),
 gmd_repeat('\ue6c4'),
 gmd_repeat_one('\ue6c5'),
 gmd_replay('\ue6c6'),
 gmd_shuffle('\ue6c7'),
 gmd_skip_next('\ue6c8'),
 gmd_skip_previous('\ue6c9'),
 gmd_snooze('\ue6ca'),
 gmd_stop('\ue6cb'),
 gmd_subtitles('\ue6cc'),
 gmd_surround_sound('\ue6cd'),
 gmd_video_collection('\ue6ce'),
 gmd_videocam('\ue6cf'),
 gmd_videocam_off('\ue6d0'),
 gmd_volume_down('\ue6d1'),
 gmd_volume_mute('\ue6d2'),
 gmd_volume_off('\ue6d3'),
 gmd_volume_up('\ue6d4'),
 gmd_web('\ue6d5'),
 gmd_business('\ue6d6'),
 gmd_call('\ue6d7'),
 gmd_call_end('\ue6d8'),
 gmd_call_made('\ue6d9'),
 gmd_call_merge('\ue6da'),
 gmd_call_missed('\ue6db'),
 gmd_call_received('\ue6dc'),
 gmd_call_split('\ue6dd'),
 gmd_chat('\ue6de'),
 gmd_clear_all('\ue6df'),
 gmd_comment('\ue6e0'),
 gmd_contacts('\ue6e1'),
 gmd_dialer_sip('\ue6e2'),
 gmd_dialpad('\ue6e3'),
 gmd_dnd_on('\ue6e4'),
 gmd_email('\ue6e5'),
 gmd_forum('\ue6e6'),
 gmd_import_export('\ue6e7'),
 gmd_invert_colors_off('\ue6e8'),
 gmd_invert_colors_on('\ue6e9'),
 gmd_live_help('\ue6ea'),
 gmd_location_off('\ue6eb'),
 gmd_location_on('\ue6ec'),
 gmd_message('\ue6ed'),
 gmd_messenger('\ue6ee'),
 gmd_no_sim('\ue6ef'),
 gmd_phone('\ue6f0'),
 gmd_portable_wifi_off('\ue6f1'),
 gmd_quick_contacts_dialer('\ue6f2'),
 gmd_quick_contacts_mail('\ue6f3'),
 gmd_ring_volume('\ue6f4'),
 gmd_stay_current_landscape('\ue6f5'),
 gmd_stay_current_portrait('\ue6f6'),
 gmd_stay_primary_landscape('\ue6f7'),
 gmd_stay_primary_portrait('\ue6f8'),
 gmd_swap_calls('\ue6f9'),
 gmd_textsms('\ue6fa'),
 gmd_voicemail('\ue6fb'),
 gmd_vpn_key('\ue6fc'),
 gmd_add('\ue6fd'),
 gmd_add_box('\ue6fe'),
 gmd_add_circle('\ue6ff'),
 gmd_add_circle_outline('\ue700'),
 gmd_archive('\ue701'),
 gmd_backspace('\ue702'),
 gmd_block('\ue703'),
 gmd_clear('\ue704'),
 gmd_content_copy('\ue705'),
 gmd_content_cut('\ue706'),
 gmd_content_paste('\ue707'),
 gmd_create('\ue708'),
 gmd_drafts('\ue709'),
 gmd_filter_list('\ue70a'),
 gmd_flag('\ue70b'),
 gmd_forward('\ue70c'),
 gmd_gesture('\ue70d'),
 gmd_inbox('\ue70e'),
 gmd_link('\ue70f'),
 gmd_mail('\ue710'),
 gmd_markunread('\ue711'),
 gmd_redo('\ue712'),
 gmd_remove('\ue713'),
 gmd_remove_circle('\ue714'),
 gmd_remove_circle_outline('\ue715'),
 gmd_reply('\ue716'),
 gmd_reply_all('\ue717'),
 gmd_report('\ue718'),
 gmd_save('\ue719'),
 gmd_select_all('\ue71a'),
 gmd_send('\ue71b'),
 gmd_sort('\ue71c'),
 gmd_text_format('\ue71d'),
 gmd_undo('\ue71e'),
 gmd_access_alarm('\ue71f'),
 gmd_access_alarms('\ue720'),
 gmd_access_time('\ue721'),
 gmd_add_alarm('\ue722'),
 gmd_airplanemode_off('\ue723'),
 gmd_airplanemode_on('\ue724'),
 gmd_battery_20('\ue725'),
 gmd_battery_30('\ue726'),
 gmd_battery_50('\ue727'),
 gmd_battery_60('\ue728'),
 gmd_battery_80('\ue729'),
 gmd_battery_90('\ue72a'),
 gmd_battery_alert('\ue72b'),
 gmd_battery_charging_20('\ue72c'),
 gmd_battery_charging_30('\ue72d'),
 gmd_battery_charging_50('\ue72e'),
 gmd_battery_charging_60('\ue72f'),
 gmd_battery_charging_80('\ue730'),
 gmd_battery_charging_90('\ue731'),
 gmd_battery_charging_full('\ue732'),
 gmd_battery_full('\ue733'),
 gmd_battery_std('\ue734'),
 gmd_battery_unknown('\ue735'),
 gmd_bluetooth('\ue736'),
 gmd_bluetooth_connected('\ue737'),
 gmd_bluetooth_disabled('\ue738'),
 gmd_bluetooth_searching('\ue739'),
 gmd_brightness_auto('\ue73a'),
 gmd_brightness_high('\ue73b'),
 gmd_brightness_low('\ue73c'),
 gmd_brightness_medium('\ue73d'),
 gmd_data_usage('\ue73e'),
 gmd_developer_mode('\ue73f'),
 gmd_devices('\ue740'),
 gmd_dvr('\ue741'),
 gmd_gps_fixed('\ue742'),
 gmd_gps_not_fixed('\ue743'),
 gmd_gps_off('\ue744'),
 gmd_location_disabled('\ue745'),
 gmd_location_searching('\ue746'),
 gmd_multitrack_audio('\ue747'),
 gmd_network_cell('\ue748'),
 gmd_network_wifi('\ue749'),
 gmd_nfc('\ue74a'),
 gmd_now_wallpaper('\ue74b'),
 gmd_now_widgets('\ue74c'),
 gmd_screen_lock_landscape('\ue74d'),
 gmd_screen_lock_portrait('\ue74e'),
 gmd_screen_lock_rotation('\ue74f'),
 gmd_screen_rotation('\ue750'),
 gmd_sd_storage('\ue751'),
 gmd_settings_system_daydream('\ue752'),
 gmd_signal_cellular_0_bar('\ue753'),
 gmd_signal_cellular_1_bar('\ue754'),
 gmd_signal_cellular_2_bar('\ue755'),
 gmd_signal_cellular_3_bar('\ue756'),
 gmd_signal_cellular_4_bar('\ue757'),
 gmd_signal_cellular_connected_no_internet_0_bar('\ue758'),
 gmd_signal_cellular_connected_no_internet_1_bar('\ue759'),
 gmd_signal_cellular_connected_no_internet_2_bar('\ue75a'),
 gmd_signal_cellular_connected_no_internet_3_bar('\ue75b'),
 gmd_signal_cellular_connected_no_internet_4_bar('\ue75c'),
 gmd_signal_cellular_no_sim('\ue75d'),
 gmd_signal_cellular_null('\ue75e'),
 gmd_signal_cellular_off('\ue75f'),
 gmd_signal_wifi_0_bar('\ue760'),
 gmd_signal_wifi_1_bar('\ue761'),
 gmd_signal_wifi_2_bar('\ue762'),
 gmd_signal_wifi_3_bar('\ue763'),
 gmd_signal_wifi_4_bar('\ue764'),
 gmd_signal_wifi_off('\ue765'),
 gmd_signal_wifi_statusbar_1_bar('\ue766'),
 gmd_signal_wifi_statusbar_2_bar('\ue767'),
 gmd_signal_wifi_statusbar_3_bar('\ue768'),
 gmd_signal_wifi_statusbar_4_bar('\ue769'),
 gmd_signal_wifi_statusbar_connected_no_internet_1('\ue76a'),
 gmd_signal_wifi_statusbar_connected_no_internet_2('\ue76b'),
 gmd_signal_wifi_statusbar_connected_no_internet_3('\ue76c'),
 gmd_signal_wifi_statusbar_connected_no_internet_4('\ue76d'),
 gmd_signal_wifi_statusbar_connected_no_internet('\ue76e'),
 gmd_signal_wifi_statusbar_not_connected('\ue76f'),
 gmd_signal_wifi_statusbar_null('\ue770'),
 gmd_storage('\ue771'),
 gmd_usb('\ue772'),
 gmd_wifi_lock('\ue773'),
 gmd_wifi_tethering('\ue774'),
 gmd_attach_file('\ue775'),
 gmd_attach_money('\ue776'),
 gmd_border_all('\ue777'),
 gmd_border_bottom('\ue778'),
 gmd_border_clear('\ue779'),
 gmd_border_color('\ue77a'),
 gmd_border_horizontal('\ue77b'),
 gmd_border_inner('\ue77c'),
 gmd_border_left('\ue77d'),
 gmd_border_outer('\ue77e'),
 gmd_border_right('\ue77f'),
 gmd_border_style('\ue780'),
 gmd_border_top('\ue781'),
 gmd_border_vertical('\ue782'),
 gmd_format_align_center('\ue783'),
 gmd_format_align_justify('\ue784'),
 gmd_format_align_left('\ue785'),
 gmd_format_align_right('\ue786'),
 gmd_format_bold('\ue787'),
 gmd_format_clear('\ue788'),
 gmd_format_color_fill('\ue789'),
 gmd_format_color_reset('\ue78a'),
 gmd_format_color_text('\ue78b'),
 gmd_format_indent_decrease('\ue78c'),
 gmd_format_indent_increase('\ue78d'),
 gmd_format_ital('\ue78e'),
 gmd_format_line_spacing('\ue78f'),
 gmd_format_list_bulleted('\ue790'),
 gmd_format_list_numbered('\ue791'),
 gmd_format_paint('\ue792'),
 gmd_format_quote('\ue793'),
 gmd_format_size('\ue794'),
 gmd_format_strikethrough('\ue795'),
 gmd_format_textdirection_l_to_r('\ue796'),
 gmd_format_textdirection_r_to_l('\ue797'),
 gmd_format_underline('\ue798'),
 gmd_functions('\ue799'),
 gmd_insert_chart('\ue79a'),
 gmd_insert_comment('\ue79b'),
 gmd_insert_drive_file('\ue79c'),
 gmd_insert_emoticon('\ue79d'),
 gmd_insert_invitation('\ue79e'),
 gmd_insert_link('\ue79f'),
 gmd_insert_photo('\ue7a0'),
 gmd_merge_type('\ue7a1'),
 gmd_mode_comment('\ue7a2'),
 gmd_mode_edit('\ue7a3'),
 gmd_publish('\ue7a4'),
 gmd_vertical_align_bottom('\ue7a5'),
 gmd_vertical_align_center('\ue7a6'),
 gmd_vertical_align_top('\ue7a7'),
 gmd_wrap_text('\ue7a8'),
 gmd_attachment('\ue7a9'),
 gmd_cloud('\ue7aa'),
 gmd_cloud_circle('\ue7ab'),
 gmd_cloud_done('\ue7ac'),
 gmd_cloud_download('\ue7ad'),
 gmd_cloud_off('\ue7ae'),
 gmd_cloud_queue('\ue7af'),
 gmd_cloud_upload('\ue7b0'),
 gmd_file_download('\ue7b1'),
 gmd_file_upload('\ue7b2'),
 gmd_folder('\ue7b3'),
 gmd_folder_open('\ue7b4'),
 gmd_folder_shared('\ue7b5'),
 gmd_cast('\ue7b6'),
 gmd_cast_connected('\ue7b7'),
 gmd_computer('\ue7b8'),
 gmd_desktop_mac('\ue7b9'),
 gmd_desktop_windows('\ue7ba'),
 gmd_dock('\ue7bb'),
 gmd_gamepad('\ue7bc'),
 gmd_headset('\ue7bd'),
 gmd_headset_m('\ue7be'),
 gmd_keyboard('\ue7bf'),
 gmd_keyboard_alt('\ue7c0'),
 gmd_keyboard_arrow_down('\ue7c1'),
 gmd_keyboard_arrow_left('\ue7c2'),
 gmd_keyboard_arrow_right('\ue7c3'),
 gmd_keyboard_arrow_up('\ue7c4'),
 gmd_keyboard_backspace('\ue7c5'),
 gmd_keyboard_capslock('\ue7c6'),
 gmd_keyboard_control('\ue7c7'),
 gmd_keyboard_hide('\ue7c8'),
 gmd_keyboard_return('\ue7c9'),
 gmd_keyboard_tab('\ue7ca'),
 gmd_keyboard_voice('\ue7cb'),
 gmd_laptop('\ue7cc'),
 gmd_laptop_chromebook('\ue7cd'),
 gmd_laptop_mac('\ue7ce'),
 gmd_laptop_windows('\ue7cf'),
 gmd_memory('\ue7d0'),
 gmd_mouse('\ue7d1'),
 gmd_phone_android('\ue7d2'),
 gmd_phone_iphone('\ue7d3'),
 gmd_phonelink('\ue7d4'),
 gmd_phonelink_off('\ue7d5'),
 gmd_security('\ue7d6'),
 gmd_sim_card('\ue7d7'),
 gmd_smartphone('\ue7d8'),
 gmd_speaker('\ue7d9'),
 gmd_tablet('\ue7da'),
 gmd_tablet_android('\ue7db'),
 gmd_tablet_mac('\ue7dc'),
 gmd_tv('\ue7dd'),
 gmd_watch('\ue7de'),
 gmd_add_to_photos('\ue7df'),
 gmd_adjust('\ue7e0'),
 gmd_assistant_photo('\ue7e1'),
 gmd_audiotrack('\ue7e2'),
 gmd_blur_circular('\ue7e3'),
 gmd_blur_linear('\ue7e4'),
 gmd_blur_off('\ue7e5'),
 gmd_blur_on('\ue7e6'),
 gmd_brightness_1('\ue7e7'),
 gmd_brightness_2('\ue7e8'),
 gmd_brightness_3('\ue7e9'),
 gmd_brightness_4('\ue7ea'),
 gmd_brightness_5('\ue7eb'),
 gmd_brightness_6('\ue7ec'),
 gmd_brightness_7('\ue7ed'),
 gmd_brush('\ue7ee'),
 gmd_camera('\ue7ef'),
 gmd_camera_alt('\ue7f0'),
 gmd_camera_front('\ue7f1'),
 gmd_camera_rear('\ue7f2'),
 gmd_camera_roll('\ue7f3'),
 gmd_center_focus_strong('\ue7f4'),
 gmd_center_focus_weak('\ue7f5'),
 gmd_collections('\ue7f6'),
 gmd_color_lens('\ue7f7'),
 gmd_colorize('\ue7f8'),
 gmd_compare('\ue7f9'),
 gmd_control_point('\ue7fa'),
 gmd_control_point_duplicate('\ue7fb'),
 gmd_crop_3_2('\ue7fc'),
 gmd_crop_5_4('\ue7fd'),
 gmd_crop_7_5('\ue7fe'),
 gmd_crop_16_9('\ue7ff'),
 gmd_crop('\ue800'),
 gmd_crop_din('\ue801'),
 gmd_crop_free('\ue802'),
 gmd_crop_landscape('\ue803'),
 gmd_crop_original('\ue804'),
 gmd_crop_portrait('\ue805'),
 gmd_crop_square('\ue806'),
 gmd_dehaze('\ue807'),
 gmd_details('\ue808'),
 gmd_edit('\ue809'),
 gmd_exposure('\ue80a'),
 gmd_exposure_minus_1('\ue80b'),
 gmd_exposure_minus_2('\ue80c'),
 gmd_exposure_plus_1('\ue80d'),
 gmd_exposure_plus_2('\ue80e'),
 gmd_exposure_zero('\ue80f'),
 gmd_filter_1('\ue810'),
 gmd_filter_2('\ue811'),
 gmd_filter_3('\ue812'),
 gmd_filter_4('\ue813'),
 gmd_filter_5('\ue814'),
 gmd_filter_6('\ue815'),
 gmd_filter_7('\ue816'),
 gmd_filter_8('\ue817'),
 gmd_filter_9('\ue818'),
 gmd_filter_9_plus('\ue819'),
 gmd_filter('\ue81a'),
 gmd_filter_b_and_w('\ue81b'),
 gmd_filter_center_focus('\ue81c'),
 gmd_filter_drama('\ue81d'),
 gmd_filter_frames('\ue81e'),
 gmd_filter_hdr('\ue81f'),
 gmd_filter_none('\ue820'),
 gmd_filter_tilt_shift('\ue821'),
 gmd_filter_vintage('\ue822'),
 gmd_flare('\ue823'),
 gmd_flash_auto('\ue824'),
 gmd_flash_off('\ue825'),
 gmd_flash_on('\ue826'),
 gmd_flip('\ue827'),
 gmd_gradient('\ue828'),
 gmd_grain('\ue829'),
 gmd_grid_off('\ue82a'),
 gmd_grid_on('\ue82b'),
 gmd_hdr_off('\ue82c'),
 gmd_hdr_on('\ue82d'),
 gmd_hdr_strong('\ue82e'),
 gmd_hdr_weak('\ue82f'),
 gmd_healing('\ue830'),
 gmd_image('\ue831'),
 gmd_image_aspect_ratio('\ue832'),
 gmd_iso('\ue833'),
 gmd_landscape('\ue834'),
 gmd_leak_add('\ue835'),
 gmd_leak_remove('\ue836'),
 gmd_lens('\ue837'),
 gmd_looks_3('\ue838'),
 gmd_looks_4('\ue839'),
 gmd_looks_5('\ue83a'),
 gmd_looks_6('\ue83b'),
 gmd_looks('\ue83c'),
 gmd_looks_one('\ue83d'),
 gmd_looks_two('\ue83e'),
 gmd_loupe('\ue83f'),
 gmd_movie_creation('\ue840'),
 gmd_nature('\ue841'),
 gmd_nature_people('\ue842'),
 gmd_navigate_before('\ue843'),
 gmd_navigate_next('\ue844'),
 gmd_palette('\ue845'),
 gmd_panorama('\ue846'),
 gmd_panorama_fisheye('\ue847'),
 gmd_panorama_horizontal('\ue848'),
 gmd_panorama_vertical('\ue849'),
 gmd_panorama_wide_angle('\ue84a'),
 gmd_photo('\ue84b'),
 gmd_photo_album('\ue84c'),
 gmd_photo_camera('\ue84d'),
 gmd_photo_library('\ue84e'),
 gmd_portrait('\ue84f'),
 gmd_remove_red_eye('\ue850'),
 gmd_rotate_left('\ue851'),
 gmd_rotate_right('\ue852'),
 gmd_slideshow('\ue853'),
 gmd_straighten('\ue854'),
 gmd_style('\ue855'),
 gmd_switch_camera('\ue856'),
 gmd_switch_video('\ue857'),
 gmd_tag_faces('\ue858'),
 gmd_texture('\ue859'),
 gmd_timelapse('\ue85a'),
 gmd_timer_3('\ue85b'),
 gmd_timer_10('\ue85c'),
 gmd_timer('\ue85d'),
 gmd_timer_auto('\ue85e'),
 gmd_timer_off('\ue85f'),
 gmd_tonality('\ue860'),
 gmd_transform('\ue861'),
 gmd_tune('\ue862'),
 gmd_wb_auto('\ue863'),
 gmd_wb_cloudy('\ue864'),
 gmd_wb_incandescent('\ue865'),
 gmd_wb_irradescent('\ue866'),
 gmd_wb_sunny('\ue867'),
 gmd_beenhere('\ue868'),
 gmd_directions('\ue869'),
 gmd_directions_bike('\ue86a'),
 gmd_directions_bus('\ue86b'),
 gmd_directions_car('\ue86c'),
 gmd_directions_ferry('\ue86d'),
 gmd_directions_subway('\ue86e'),
 gmd_directions_train('\ue86f'),
 gmd_directions_transit('\ue870'),
 gmd_directions_walk('\ue871'),
 gmd_flight('\ue872'),
 gmd_hotel('\ue873'),
 gmd_layers('\ue874'),
 gmd_layers_clear('\ue875'),
 gmd_local_airport('\ue876'),
 gmd_local_atm('\ue877'),
 gmd_local_attraction('\ue878'),
 gmd_local_bar('\ue879'),
 gmd_local_cafe('\ue87a'),
 gmd_local_car_wash('\ue87b'),
 gmd_local_convenience_store('\ue87c'),
 gmd_local_drink('\ue87d'),
 gmd_local_florist('\ue87e'),
 gmd_local_gas_station('\ue87f'),
 gmd_local_grocery_store('\ue880'),
 gmd_local_hospital('\ue881'),
 gmd_local_hotel('\ue882'),
 gmd_local_laundry_service('\ue883'),
 gmd_local_library('\ue884'),
 gmd_local_mall('\ue885'),
 gmd_local_movies('\ue886'),
 gmd_local_offer('\ue887'),
 gmd_local_parking('\ue888'),
 gmd_local_pharmacy('\ue889'),
 gmd_local_phone('\ue88a'),
 gmd_local_pizza('\ue88b'),
 gmd_local_play('\ue88c'),
 gmd_local_post_office('\ue88d'),
 gmd_local_print_shop('\ue88e'),
 gmd_local_restaurant('\ue88f'),
 gmd_local_see('\ue890'),
 gmd_local_shipping('\ue891'),
 gmd_local_taxi('\ue892'),
 gmd_location_history('\ue893'),
 gmd_map('\ue894'),
 gmd_my_location('\ue895'),
 gmd_navigation('\ue896'),
 gmd_pin_drop('\ue897'),
 gmd_place('\ue898'),
 gmd_rate_review('\ue899'),
 gmd_restaurant_menu('\ue89a'),
 gmd_satellite('\ue89b'),
 gmd_store_mall_directory('\ue89c'),
 gmd_terrain('\ue89d'),
 gmd_traff('\ue89e'),
 gmd_apps('\ue89f'),
 gmd_arrow_back('\ue8a0'),
 gmd_arrow_drop_down('\ue8a1'),
 gmd_arrow_drop_down_circle('\ue8a2'),
 gmd_arrow_drop_up('\ue8a3'),
 gmd_arrow_forward('\ue8a4'),
 gmd_cancel('\ue8a5'),
 gmd_check('\ue8a6'),
 gmd_chevron_left('\ue8a7'),
 gmd_chevron_right('\ue8a8'),
 gmd_close('\ue8a9'),
 gmd_expand_less('\ue8aa'),
 gmd_expand_more('\ue8ab'),
 gmd_fullscreen('\ue8ac'),
 gmd_fullscreen_exit('\ue8ad'),
 gmd_menu('\ue8ae'),
 gmd_more_horiz('\ue8af'),
 gmd_more_vert('\ue8b0'),
 gmd_refresh('\ue8b1'),
 gmd_unfold_less('\ue8b2'),
 gmd_unfold_more('\ue8b3'),
 gmd_adb('\ue8b4'),
 gmd_bluetooth_audio('\ue8b5'),
 gmd_disc_full('\ue8b6'),
 gmd_dnd_forwardslash('\ue8b7'),
 gmd_do_not_disturb('\ue8b8'),
 gmd_drive_eta('\ue8b9'),
 gmd_event_available('\ue8ba'),
 gmd_event_busy('\ue8bb'),
 gmd_event_note('\ue8bc'),
 gmd_folder_special('\ue8bd'),
 gmd_mms('\ue8be'),
 gmd_more('\ue8bf'),
 gmd_network_locked('\ue8c0'),
 gmd_phone_bluetooth_speaker('\ue8c1'),
 gmd_phone_forwarded('\ue8c2'),
 gmd_phone_in_talk('\ue8c3'),
 gmd_phone_locked('\ue8c4'),
 gmd_phone_missed('\ue8c5'),
 gmd_phone_paused('\ue8c6'),
 gmd_play_download('\ue8c7'),
 gmd_play_install('\ue8c8'),
 gmd_sd_card('\ue8c9'),
 gmd_sim_card_alert('\ue8ca'),
 gmd_sms('\ue8cb'),
 gmd_sms_failed('\ue8cc'),
 gmd_sync('\ue8cd'),
 gmd_sync_disabled('\ue8ce'),
 gmd_sync_problem('\ue8cf'),
 gmd_system_update('\ue8d0'),
 gmd_tap_and_play('\ue8d1'),
 gmd_time_to_leave('\ue8d2'),
 gmd_vibration('\ue8d3'),
 gmd_voice_chat('\ue8d4'),
 gmd_vpn_lock('\ue8d5'),
 gmd_cake('\ue8d6'),
 gmd_domain('\ue8d7'),
 gmd_group('\ue8d8'),
 gmd_group_add('\ue8d9'),
 gmd_location_city('\ue8da'),
 gmd_mood('\ue8db'),
 gmd_notifications('\ue8dc'),
 gmd_notifications_none('\ue8dd'),
 gmd_notifications_off('\ue8de'),
 gmd_notifications_on('\ue8df'),
 gmd_notifications_paused('\ue8e0'),
 gmd_pages('\ue8e1'),
 gmd_party_mode('\ue8e2'),
 gmd_people('\ue8e3'),
 gmd_people_outline('\ue8e4'),
 gmd_person('\ue8e5'),
 gmd_person_add('\ue8e6'),
 gmd_person_outline('\ue8e7'),
 gmd_plus_one('\ue8e8'),
 gmd_poll('\ue8e9'),
 gmd_publ('\ue8ea'),
 gmd_school('\ue8eb'),
 gmd_share('\ue8ec'),
 gmd_whatshot('\ue8ed'),
 gmd_check_box('\ue8ee'),
 gmd_check_box_outline_blank('\ue8ef'),
 gmd_radio_button_off('\ue8f0'),
 gmd_radio_button_on('\ue8f1'),
 gmd_star('\ue8f2'),
 gmd_star_half('\ue8f3'),
 gmd_star_outline('\ue8f4');
 */


@end
