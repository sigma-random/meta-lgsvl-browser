require chromium-upstream-tarball.inc

PV = "76.0.3809.132"

SRC_URI[md5sum] = "389e62cd2f0d7a21159241e3a31df0c0"
SRC_URI[sha256sum] = "d54e4640b5e399d170dffbc5bcff65157eb1b29314b94b5d808f727d9ce45241"

LIC_FILES_CHKSUM += "\
  file://${S}/buildtools/third_party/libc++/trunk/LICENSE.TXT;md5=55d89dd7eec8d3b4204b680e27da3953 \
  file://${S}/buildtools/third_party/libc++abi/trunk/LICENSE.TXT;md5=7b9334635b542c56868400a46b272b1e \
  file://${S}/third_party/SPIRV-Tools/LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57 \
  file://${S}/third_party/angle/LICENSE;md5=7abdb66a6948f39c2f469140db5184e2 \
  file://${S}/third_party/blink/LICENSE_FOR_ABOUT_CREDITS;md5=11e90d553b211de885f245900c4ccf89 \
  file://${S}/third_party/boringssl/src/LICENSE;md5=e91719b7727a2d3464ec006154275572 \
  file://${S}/third_party/breakpad/LICENSE;md5=828152b41153892a725f0e7f56faff73 \
  file://${S}/third_party/chromevox/LICENSE;md5=45739090b454125d851ac7bb1bbd23a2 \
  file://${S}/third_party/d3/src/LICENSE;md5=0679931d76eb2f1dd1915249da84a722 \
  file://${S}/third_party/expat/files/COPYING;md5=5b8620d98e49772d95fc1d291c26aa79 \
  file://${S}/third_party/ffmpeg/CREDITS.chromium;md5=eeb4d970460805156a5bc3a414d48740\
  file://${S}/third_party/freetype/src/docs/FTL.TXT;md5=9f37b4e6afa3fef9dba8932b16bd3f97 \
  file://${S}/third_party/google_toolbox_for_mac/LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57 \
  file://${S}/third_party/harfbuzz-ng/src/COPYING;md5=e11f5c3149cdec4bb309babb020b32b9 \
  file://${S}/third_party/icu/LICENSE;md5=8bc5d32052a96f214cbdd1e53dfc935d \
  file://${S}/third_party/libjpeg_turbo/LICENSE.md;md5=f568c3bdd0195918f507100b71862ee5 \
  file://${S}/third_party/libpng/LICENSE;md5=b0085051bf265bac2bfc38bc89f50000 \
  file://${S}/third_party/libsrtp/LICENSE;md5=2909fcf6f09ffff8430463d91c08c4e1\
  file://${S}/third_party/ots/LICENSE;md5=e06eff2aa65b917034a81599bea73dc4 \
  file://${S}/third_party/protobuf/LICENSE;md5=37b5762e07f0af8c74ce80a8bda4266b \
  file://${S}/third_party/shaderc/src/LICENSE;md5=86d3f3a95c324c9479bd8986968f4327 \
  file://${S}/third_party/wtl/Ms-PL.txt;md5=c1ff18e69b2e953f65f28bcbc29be275 \
  file://${S}/third_party/yasm/source/patched-yasm/COPYING;md5=a12d8903508fb6bfd49d8d82c6170dd9 \
  file://${S}/v8/LICENSE;md5=6611673a9587a522034a4be8f4df564c \
"

SRC_URI += " \
 file://0001-v8-7.6.303.22-Wrap-several-native-binary-calls-on-Yo.patch;patchdir=v8 \
 file://0001-Use-v8-qemu-wrapper.sh-on-v8-context-snapshot-creati.patch \
 file://0001-Add-missing-limits-header-to-crashpad.patch;patchdir=third_party/crashpad/crashpad \
 file://0001-NEON-do-not-use-certain-calls-that-would-break-GCC-b.patch;patchdir=third_party/skia \
 file://0001-zlib-fix-ARMv8-CRC32-compilation-in-GCC.patch \
 file://0001-GCC-do-not-use-old-C-notation-to-assign-struct-with-.patch \
 file://0001-GCC-CertNetFetcherImpl-declares-Job-as-a-friend-but-.patch \
 file://0001-GCC-accessing-TransportParameters-enum-class-members.patch;patchdir=net/third_party/quiche/src \
 file://0001-GCC-remove-noexcept-from-move-constructor-and-assign.patch \
 file://0001-Fix-AutoCompleteMatch-move-constructor-assign-operat.patch \
 file://0001-Make-SharedMemoryMapping-move-constructor-noexcept.patch \
 file://0001-IWYU-ThemeService-requires-NativeTheme.patch \
 file://0001-Make-blink-LayoutUnit-HasFraction-constexpr.patch \
 file://0001-GCC-FeaturePolicyParser-ParseValueForFuzzer-is-not-i.patch \
 file://0001-Avoid-pure-virtual-crash-destroying-RenderProcessUse.patch \
 file://0001-ThrottlingController-Liveness-needs-to-be-uint32_t.patch \
 file://0001-GCC-avoid-ambiguous-NoDestructor-creation-in-GetNeve.patch \
 file://0001-DisjoingRangeLockManager-Lock-move-constructor-assig.patch \
 file://0001-GCC-XSetWindowAttributes-struct-initialization-shoul.patch \
 file://0001-GCC-remove-noexcept-in-history-QueryURLResult-move-c.patch \
 file://0001-GCC-move-explicit-specialization-out-of-RunInfo.patch \
 file://0001-ozone-wayland-Fix-method-prototype-match.patch \
 file://0001-tcmalloc-Use-the-default-TLS-model-on-arm-gcc-always.patch \
 file://0001-tcmalloc-drop-initial-exec-TLS-model-on-arm-gcc-in-a.patch \
"

PRODUCT_LOGO_SIZES_append = " 22"
