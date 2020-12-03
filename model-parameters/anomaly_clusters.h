/* Generated by Edge Impulse
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*/

#ifndef _EI_CLASSIFIER_ANOMALY_CLUSTERS_H_
#define _EI_CLASSIFIER_ANOMALY_CLUSTERS_H_

#include "edge-impulse-sdk/anomaly/anomaly.h"

// (before - mean) / scale
const float ei_classifier_anom_scale[EI_CLASSIFIER_ANOM_AXIS_SIZE] = { 4.677716991045109, 2.6807735798322265, 1.7878896521529057 };
const float ei_classifier_anom_mean[EI_CLASSIFIER_ANOM_AXIS_SIZE] = { 4.049253756995615, 2.176246025334355, 1.7247324142624738 };

const ei_classifier_anom_cluster_t ei_classifier_anom_clusters[EI_CLASSIFIER_ANOM_CLUSTER_COUNT] = { { { 0.9413912296295166, -0.08971147239208221, 0.7179376482963562 }, 0.5356817539957859 }
, { { -0.6738870143890381, -0.2557586431503296, -0.8247552514076233 }, 0.362900178940928 }
, { { -0.8648430705070496, -0.8103421926498413, -0.9609860777854919 }, 0.06897922916764229 }
, { { -0.5571534633636475, 0.33748769760131836, -0.27260375022888184 }, 0.3526546775143699 }
, { { -0.5903197526931763, -0.2339160293340683, 1.723380208015442 }, 0.35302354501376615 }
, { { -0.3960973620414734, 0.4624580442905426, 2.5176501274108887 }, 0.9688298452511979 }
, { { 1.6215823888778687, 0.7123550176620483, 0.4993118941783905 }, 0.4322403489953668 }
, { { -0.6658020615577698, 0.04280798137187958, 1.7535597085952759 }, 0.290726926551033 }
, { { -0.29934456944465637, 3.3710031509399414, -0.3291153907775879 }, 0.5814131940235385 }
, { { 0.9929208159446716, -0.05668700486421585, -0.3459545373916626 }, 0.32752752207054997 }
, { { 1.8100231885910034, 0.17945271730422974, 0.5584878921508789 }, 0.3337758929021336 }
, { { -0.6848191618919373, -0.35819223523139954, -0.6410965919494629 }, 0.2184258131646088 }
, { { -0.4663541913032532, -0.3648938536643982, 2.1904473304748535 }, 0.7695180287745467 }
, { { 1.3411140441894531, -0.3588453233242035, 0.6416141986846924 }, 0.42365630774302493 }
, { { 1.3017452955245972, -0.2886616289615631, -0.41416722536087036 }, 0.504946895446256 }
, { { 1.225468635559082, 0.2440076321363449, -0.08977517485618591 }, 0.37141098024650004 }
, { { 1.1695924997329712, -0.30123957991600037, -0.11418882012367249 }, 0.3994294366549366 }
, { { -0.7164380550384521, -0.5150645971298218, 1.0797898769378662 }, 0.3642336272741189 }
, { { 1.766417145729065, 0.34120380878448486, 0.23133675754070282 }, 0.432689606276575 }
, { { -0.3669848144054413, -0.2970219552516937, 2.6102116107940674 }, 0.625773591681425 }
, { { 1.0260059833526611, 3.2638466358184814, 1.1441134214401245 }, 0.31586356851643943 }
, { { -0.5471082925796509, 0.08791481703519821, 1.3171415328979492 }, 0.4125157018452397 }
, { { 1.9367129802703857, 0.06214451044797897, 1.378117322921753 }, 0.5566898009406961 }
, { { -0.5300270318984985, 0.607234001159668, 0.019164910539984703 }, 0.5650080258232278 }
, { { 1.3999464511871338, 0.15526315569877625, -0.4350607693195343 }, 0.5433967102007007 }
, { { -0.06577403843402863, 1.1373364925384521, 0.6350269913673401 }, 0.35899016347700663 }
, { { -0.6809958815574646, -0.3300788402557373, 1.444684386253357 }, 0.3218255699418774 }
, { { -0.015070606023073196, 3.7239797115325928, -0.22810271382331848 }, 0.6345822949241652 }
, { { -0.2923890948295593, 1.6439085006713867, 0.0626782476902008 }, 0.4493292014650438 }
, { { 1.936795711517334, -0.07243405282497406, 0.8800175189971924 }, 0.2726712345668101 }
, { { 1.5021835565567017, 0.6580550074577332, -0.010426107794046402 }, 0.38543552134582026 }
, { { 0.8201168775558472, 2.773259401321411, 0.7787922620773315 }, 0.45324703907814345 }
};

#endif // _EI_CLASSIFIER_ANOMALY_CLUSTERS_H_
