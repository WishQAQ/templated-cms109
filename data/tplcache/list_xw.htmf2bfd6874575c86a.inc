<?php
$z[0]=Array("field","",346,365);
$z[0][4]['name']="title";
$z[1]=Array("global","",366,392);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",433,462);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",502,560);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",1051,1086);
$z[4][4]['filename']="head.htm";
$z[5]=Array("field","",1706,1764);
$z[5][4]['name']="typeid";
$z[5][4]['function']="GetTopTypename(@me)";
$z[6]=Array("channel","\r\n          <li><a  href=\"[field:typeurl/]\"><font>></font>[field:typename/]</a></li>\r\n          ",1819,2070);
$z[6][4]['type']="son";
$z[6][4]['currentstyle']="<li><a href='~typelink~' class='cur_left'><font>></font>~typename~</a></li>";
$z[7]=Array("arclist","\r\n              <li><a href=\"[field:arcurl/]\"  title=\"[field:title/]\"><img src=\"[field:picname/]\" /><span>[field:title/]</span></a></li>\r\n              ",2285,2496);
$z[7][4]['row']="12";
$z[7][4]['titlelen']="32";
$z[7][4]['typeid']="6";
$z[8]=Array("field","",2636,2665);
$z[8][4]['name']="position";
$z[9]=Array("field","",2680,2709);
$z[9][4]['name']="typename";
$z[10]=Array("list","\r\n          <li>\r\n            <div class=\"rq\">\r\n              <h4>[field:pubdate function=\"MyDate('d',@me)\"/]</h4>\r\n              <p>[field:pubdate function=\"MyDate('Y-m',@me)\"/]</p>\r\n            </div>\r\n            <h3><a href=\"[field:arcurl/]\" title=\"[field:title/]\">[field:title/]</a></h3>\r\n            <p>[field:description/]...<a href=\"[field:arcurl/]\">详细</a></p>\r\n          </li>\r\n          ",2797,3234);
$z[10][4]['pagesize']="7";
$z[11]=Array("pagelist","",3275,3328);
$z[11][4]['listitem']="index,end,pre,next,pageno";
$z[12]=Array("include","",3388,3425);
$z[12][4]['filename']="footer.htm";

?>