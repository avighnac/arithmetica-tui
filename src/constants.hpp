#pragma once

#include <iostream>
#include <string>
#include <vector>

std::string version = "0.4.1";
std::string autorelease = "0";
size_t accuracy = 10;
std::ostream &outstream = std::cout;
std::istream &instream = std::cin;

std::string pi =
    "3."
    "141592653589793238462643383279502884197169399375105820974944592307816406"
    "286208998628034825342117067982148086513282306647093844609550582231725359"
    "408128481117450284102701938521105559644622948954930381964428810975665933"
    "446128475648233786783165271201909145648566923460348610454326648213393607"
    "260249141273724587006606315588174881520920962829254091715364367892590360"
    "011330530548820466521384146951941511609433057270365759591953092186117381"
    "932611793105118548074462379962749567351885752724891227938183011949129833"
    "673362440656643086021394946395224737190702179860943702770539217176293176"
    "752384674818467669405132000568127145263560827785771342757789609173637178"
    "721468440901224953430146549585371050792279689258923542019956112129021960"
    "864034418159813629774771309960518707211349999998372978049951059731732816"
    "096318595024459455346908302642522308253344685035261931188171010003137838"
    "752886587533208381420617177669147303598253490428755468731159562863882353"
    "7875937519577818577805321712268066130019278766111959092164201989";
std::string inverse_pi =
    "0."
    "318309886183790671537767526745028724068919291480912897495334688117793595"
    "268453070180227605532506171912145685453515916073785823692229157305755934"
    "821463399678458479933874818155146155492793850615377434785792434795323386"
    "724780483447258023664760228445399511431880923780173805347912240978821873"
    "875688171057446199892886800497344695478919221796646193566149812333972925"
    "609398897304375763149573133928482077991748278697219967736198399924885751"
    "170342357716862235037534321093095073976019478920729518667536118604988993"
    "270610654313551006440649555632794332045893496239196331681212033606071996"
    "267823974997665573308870559510140032481355128777699142621760244398752295"
    "362755529475781266136092915956963522624854628139921550049000595519714178"
    "113805593570263050420032635492041849623212481122912406292968178496918382"
    "870423150815112401743053213604434318281514949165445195492570799750310658"
    "781627963544818716509594146657438081399951815315415698694078717965617434"
    "6851280733790233250914118866552625373000522454359423064225199009";

std::vector<std::string> functions = {
    "eval", "add",  "mul",        "factor", "sin",  "cos",
    "tan",  "asin", "acos",       "atan",   "sqrt", "exp",
    "log",  "fact", "tocontfrac", "gcd",    "lcm"};