//=================================================================================================
// Copyright 2013-2014 Dirk Lemstra <https://magick.codeplex.com/>
//
// Licensed under the ImageMagick License (the "License"); you may not use this file except in
// compliance with the License. You may obtain a copy of the License at
//
//   http://www.imagemagick.org/script/license.php
//
// Unless required by applicable law or agreed to in writing, software distributed under the
// License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
// express or implied. See the License for the specific language governing permissions and
// limitations under the License.
//=================================================================================================
void ExecuteImage(XmlElement^ element, MagickImage^ image);
void ExecuteAdjoin(XmlElement^ element, MagickImage^ image);
void ExecuteAlphaColor(XmlElement^ element, MagickImage^ image);
void ExecuteAnimationDelay(XmlElement^ element, MagickImage^ image);
void ExecuteAnimationIterations(XmlElement^ element, MagickImage^ image);
void ExecuteAntiAlias(XmlElement^ element, MagickImage^ image);
void ExecuteBackgroundColor(XmlElement^ element, MagickImage^ image);
void ExecuteBlackPointCompensation(XmlElement^ element, MagickImage^ image);
void ExecuteBorderColor(XmlElement^ element, MagickImage^ image);
void ExecuteBoxColor(XmlElement^ element, MagickImage^ image);
void ExecuteClassType(XmlElement^ element, MagickImage^ image);
void ExecuteClipMask(XmlElement^ element, MagickImage^ image);
void ExecuteColorFuzz(XmlElement^ element, MagickImage^ image);
void ExecuteColorMapSize(XmlElement^ element, MagickImage^ image);
void ExecuteColorSpace(XmlElement^ element, MagickImage^ image);
void ExecuteColorType(XmlElement^ element, MagickImage^ image);
void ExecuteComment(XmlElement^ element, MagickImage^ image);
void ExecuteCompose(XmlElement^ element, MagickImage^ image);
void ExecuteCompressionMethod(XmlElement^ element, MagickImage^ image);
void ExecuteDebug(XmlElement^ element, MagickImage^ image);
void ExecuteDensity(XmlElement^ element, MagickImage^ image);
void ExecuteDepth(XmlElement^ element, MagickImage^ image);
void ExecuteEndian(XmlElement^ element, MagickImage^ image);
void ExecuteFillColor(XmlElement^ element, MagickImage^ image);
void ExecuteFillPattern(XmlElement^ element, MagickImage^ image);
void ExecuteFillRule(XmlElement^ element, MagickImage^ image);
void ExecuteFilterType(XmlElement^ element, MagickImage^ image);
void ExecuteFlashPixView(XmlElement^ element, MagickImage^ image);
void ExecuteFont(XmlElement^ element, MagickImage^ image);
void ExecuteFontPointsize(XmlElement^ element, MagickImage^ image);
void ExecuteFormat(XmlElement^ element, MagickImage^ image);
void ExecuteGifDisposeMethod(XmlElement^ element, MagickImage^ image);
void ExecuteHasAlpha(XmlElement^ element, MagickImage^ image);
void ExecuteInterlace(XmlElement^ element, MagickImage^ image);
void ExecuteInterpolate(XmlElement^ element, MagickImage^ image);
void ExecuteIsMonochrome(XmlElement^ element, MagickImage^ image);
void ExecuteLabel(XmlElement^ element, MagickImage^ image);
void ExecuteMask(XmlElement^ element, MagickImage^ image);
void ExecuteOrientation(XmlElement^ element, MagickImage^ image);
void ExecutePage(XmlElement^ element, MagickImage^ image);
void ExecuteQuality(XmlElement^ element, MagickImage^ image);
void ExecuteRenderingIntent(XmlElement^ element, MagickImage^ image);
void ExecuteResolutionUnits(XmlElement^ element, MagickImage^ image);
void ExecuteStrokeAntiAlias(XmlElement^ element, MagickImage^ image);
void ExecuteStrokeColor(XmlElement^ element, MagickImage^ image);
void ExecuteStrokeDashArray(XmlElement^ element, MagickImage^ image);
void ExecuteStrokeDashOffset(XmlElement^ element, MagickImage^ image);
void ExecuteStrokeLineCap(XmlElement^ element, MagickImage^ image);
void ExecuteStrokeLineJoin(XmlElement^ element, MagickImage^ image);
void ExecuteStrokeMiterLimit(XmlElement^ element, MagickImage^ image);
void ExecuteStrokePattern(XmlElement^ element, MagickImage^ image);
void ExecuteStrokeWidth(XmlElement^ element, MagickImage^ image);
void ExecuteTextDirection(XmlElement^ element, MagickImage^ image);
void ExecuteTextEncoding(XmlElement^ element, MagickImage^ image);
void ExecuteTextGravity(XmlElement^ element, MagickImage^ image);
void ExecuteTextInterlineSpacing(XmlElement^ element, MagickImage^ image);
void ExecuteTextInterwordSpacing(XmlElement^ element, MagickImage^ image);
void ExecuteTextKerning(XmlElement^ element, MagickImage^ image);
void ExecuteVerbose(XmlElement^ element, MagickImage^ image);
void ExecuteVirtualPixelMethod(XmlElement^ element, MagickImage^ image);
void ExecuteAdaptiveBlur(XmlElement^ element, MagickImage^ image);
void ExecuteAdaptiveResize(XmlElement^ element, MagickImage^ image);
void ExecuteAdaptiveSharpen(XmlElement^ element, MagickImage^ image);
void ExecuteAdaptiveThreshold(XmlElement^ element, MagickImage^ image);
void ExecuteAddNoise(XmlElement^ element, MagickImage^ image);
void ExecuteAddProfile(XmlElement^ element, MagickImage^ image);
void ExecuteAlpha(XmlElement^ element, MagickImage^ image);
void ExecuteAnnotate(XmlElement^ element, MagickImage^ image);
void ExecuteAutoGamma(XmlElement^ element, MagickImage^ image);
void ExecuteAutoLevel(XmlElement^ element, MagickImage^ image);
static void ExecuteAutoOrient(MagickImage^ image);
void ExecuteBitDepth(XmlElement^ element, MagickImage^ image);
void ExecuteBlackThreshold(XmlElement^ element, MagickImage^ image);
void ExecuteBlueShift(XmlElement^ element, MagickImage^ image);
void ExecuteBlur(XmlElement^ element, MagickImage^ image);
void ExecuteBorder(XmlElement^ element, MagickImage^ image);
void ExecuteBrightnessContrast(XmlElement^ element, MagickImage^ image);
void ExecuteCannyEdge(XmlElement^ element, MagickImage^ image);
void ExecuteCDL(XmlElement^ element, MagickImage^ image);
void ExecuteChangeColorSpace(XmlElement^ element, MagickImage^ image);
void ExecuteCharcoal(XmlElement^ element, MagickImage^ image);
void ExecuteChop(XmlElement^ element, MagickImage^ image);
void ExecuteChopHorizontal(XmlElement^ element, MagickImage^ image);
void ExecuteChopVertical(XmlElement^ element, MagickImage^ image);
void ExecuteChromaBluePrimary(XmlElement^ element, MagickImage^ image);
void ExecuteChromaGreenPrimary(XmlElement^ element, MagickImage^ image);
void ExecuteChromaRedPrimary(XmlElement^ element, MagickImage^ image);
void ExecuteChromaWhitePoint(XmlElement^ element, MagickImage^ image);
void ExecuteClamp(XmlElement^ element, MagickImage^ image);
void ExecuteClip(XmlElement^ element, MagickImage^ image);
void ExecuteClut(XmlElement^ element, MagickImage^ image);
void ExecuteColorAlpha(XmlElement^ element, MagickImage^ image);
void ExecuteColorize(XmlElement^ element, MagickImage^ image);
void ExecuteColorMap(XmlElement^ element, MagickImage^ image);
void ExecuteComposite(XmlElement^ element, MagickImage^ image);
void ExecuteContrast(XmlElement^ element, MagickImage^ image);
void ExecuteContrastStretch(XmlElement^ element, MagickImage^ image);
void ExecuteCrop(XmlElement^ element, MagickImage^ image);
void ExecuteCycleColormap(XmlElement^ element, MagickImage^ image);
void ExecuteDecipher(XmlElement^ element, MagickImage^ image);
void ExecuteDeskew(XmlElement^ element, MagickImage^ image);
static void ExecuteDespeckle(MagickImage^ image);
static void ExecuteDetermineColorType(MagickImage^ image);
void ExecuteDistort(XmlElement^ element, MagickImage^ image);
void ExecuteEdge(XmlElement^ element, MagickImage^ image);
void ExecuteEmboss(XmlElement^ element, MagickImage^ image);
void ExecuteEncipher(XmlElement^ element, MagickImage^ image);
static void ExecuteEnhance(MagickImage^ image);
static void ExecuteEqualize(MagickImage^ image);
void ExecuteEvaluate(XmlElement^ element, MagickImage^ image);
void ExecuteExtent(XmlElement^ element, MagickImage^ image);
static void ExecuteFlip(MagickImage^ image);
void ExecuteFloodFill(XmlElement^ element, MagickImage^ image);
static void ExecuteFlop(MagickImage^ image);
void ExecuteFrame(XmlElement^ element, MagickImage^ image);
void ExecuteFx(XmlElement^ element, MagickImage^ image);
void ExecuteGamma(XmlElement^ element, MagickImage^ image);
void ExecuteGaussianBlur(XmlElement^ element, MagickImage^ image);
void ExecuteGrayscale(XmlElement^ element, MagickImage^ image);
void ExecuteHaldClut(XmlElement^ element, MagickImage^ image);
void ExecuteHoughLine(XmlElement^ element, MagickImage^ image);
void ExecuteImplode(XmlElement^ element, MagickImage^ image);
void ExecuteInverseFloodFill(XmlElement^ element, MagickImage^ image);
void ExecuteInverseFourierTransform(XmlElement^ element, MagickImage^ image);
void ExecuteInverseLevelColors(XmlElement^ element, MagickImage^ image);
void ExecuteInverseOpaque(XmlElement^ element, MagickImage^ image);
void ExecuteLevel(XmlElement^ element, MagickImage^ image);
void ExecuteLevelColors(XmlElement^ element, MagickImage^ image);
void ExecuteLinearStretch(XmlElement^ element, MagickImage^ image);
void ExecuteLiquidRescale(XmlElement^ element, MagickImage^ image);
void ExecuteLower(XmlElement^ element, MagickImage^ image);
static void ExecuteMagnify(MagickImage^ image);
void ExecuteMedianFilter(XmlElement^ element, MagickImage^ image);
static void ExecuteMinify(MagickImage^ image);
void ExecuteModulate(XmlElement^ element, MagickImage^ image);
void ExecuteMorphology(XmlElement^ element, MagickImage^ image);
void ExecuteMotionBlur(XmlElement^ element, MagickImage^ image);
void ExecuteNegate(XmlElement^ element, MagickImage^ image);
static void ExecuteNormalize(MagickImage^ image);
void ExecuteOilPaint(XmlElement^ element, MagickImage^ image);
void ExecuteOpaque(XmlElement^ element, MagickImage^ image);
void ExecuteOrderedDither(XmlElement^ element, MagickImage^ image);
void ExecutePerceptible(XmlElement^ element, MagickImage^ image);
void ExecutePolaroid(XmlElement^ element, MagickImage^ image);
void ExecutePosterize(XmlElement^ element, MagickImage^ image);
static void ExecutePreserveColorType(MagickImage^ image);
void ExecuteQuantize(XmlElement^ element, MagickImage^ image);
void ExecuteRaise(XmlElement^ element, MagickImage^ image);
void ExecuteRandomThreshold(XmlElement^ element, MagickImage^ image);
void ExecuteReduceNoise(XmlElement^ element, MagickImage^ image);
void ExecuteRemoveProfile(XmlElement^ element, MagickImage^ image);
static void ExecuteRePage(MagickImage^ image);
void ExecuteResample(XmlElement^ element, MagickImage^ image);
void ExecuteResize(XmlElement^ element, MagickImage^ image);
void ExecuteRoll(XmlElement^ element, MagickImage^ image);
void ExecuteRotate(XmlElement^ element, MagickImage^ image);
void ExecuteRotationalBlur(XmlElement^ element, MagickImage^ image);
void ExecuteSample(XmlElement^ element, MagickImage^ image);
void ExecuteScale(XmlElement^ element, MagickImage^ image);
void ExecuteSegment(XmlElement^ element, MagickImage^ image);
void ExecuteSelectiveBlur(XmlElement^ element, MagickImage^ image);
void ExecuteSepiaTone(XmlElement^ element, MagickImage^ image);
void ExecuteSetArtifact(XmlElement^ element, MagickImage^ image);
void ExecuteSetAttenuate(XmlElement^ element, MagickImage^ image);
void ExecuteSetAttribute(XmlElement^ element, MagickImage^ image);
void ExecuteSetDefine(XmlElement^ element, MagickImage^ image);
void ExecuteSetHighlightColor(XmlElement^ element, MagickImage^ image);
void ExecuteSetLowlightColor(XmlElement^ element, MagickImage^ image);
void ExecuteShade(XmlElement^ element, MagickImage^ image);
void ExecuteShadow(XmlElement^ element, MagickImage^ image);
void ExecuteSharpen(XmlElement^ element, MagickImage^ image);
void ExecuteShave(XmlElement^ element, MagickImage^ image);
void ExecuteShear(XmlElement^ element, MagickImage^ image);
void ExecuteSigmoidalContrast(XmlElement^ element, MagickImage^ image);
void ExecuteSketch(XmlElement^ element, MagickImage^ image);
void ExecuteSolarize(XmlElement^ element, MagickImage^ image);
void ExecuteSparseColor(XmlElement^ element, MagickImage^ image);
void ExecuteSpread(XmlElement^ element, MagickImage^ image);
void ExecuteStegano(XmlElement^ element, MagickImage^ image);
void ExecuteStereo(XmlElement^ element, MagickImage^ image);
static void ExecuteStrip(MagickImage^ image);
void ExecuteSwirl(XmlElement^ element, MagickImage^ image);
void ExecuteTexture(XmlElement^ element, MagickImage^ image);
void ExecuteThreshold(XmlElement^ element, MagickImage^ image);
void ExecuteThumbnail(XmlElement^ element, MagickImage^ image);
void ExecuteTile(XmlElement^ element, MagickImage^ image);
void ExecuteTint(XmlElement^ element, MagickImage^ image);
void ExecuteTransform(XmlElement^ element, MagickImage^ image);
void ExecuteTransformOrigin(XmlElement^ element, MagickImage^ image);
static void ExecuteTransformReset(MagickImage^ image);
void ExecuteTransformRotation(XmlElement^ element, MagickImage^ image);
void ExecuteTransformScale(XmlElement^ element, MagickImage^ image);
void ExecuteTransformSkewX(XmlElement^ element, MagickImage^ image);
void ExecuteTransformSkewY(XmlElement^ element, MagickImage^ image);
void ExecuteTransparent(XmlElement^ element, MagickImage^ image);
void ExecuteTransparentChroma(XmlElement^ element, MagickImage^ image);
static void ExecuteTranspose(MagickImage^ image);
static void ExecuteTransverse(MagickImage^ image);
static void ExecuteTrim(MagickImage^ image);
void ExecuteUnsharpmask(XmlElement^ element, MagickImage^ image);
void ExecuteVignette(XmlElement^ element, MagickImage^ image);
void ExecuteWave(XmlElement^ element, MagickImage^ image);
void ExecuteWhiteThreshold(XmlElement^ element, MagickImage^ image);
void ExecuteZoom(XmlElement^ element, MagickImage^ image);
MagickImage^ ExecuteCollection(XmlElement^ element, MagickImageCollection^ collection);
static MagickImage^ ExecuteCoalesce(MagickImageCollection^ collection);
static MagickImage^ ExecuteDeconstruct(MagickImageCollection^ collection);
MagickImage^ ExecuteMap(XmlElement^ element, MagickImageCollection^ collection);
static MagickImage^ ExecuteOptimize(MagickImageCollection^ collection);
static MagickImage^ ExecuteOptimizePlus(MagickImageCollection^ collection);
static MagickImage^ ExecuteOptimizeTransparency(MagickImageCollection^ collection);
MagickImage^ ExecuteQuantize(XmlElement^ element, MagickImageCollection^ collection);
static MagickImage^ ExecuteRePage(MagickImageCollection^ collection);
static MagickImage^ ExecuteReverse(MagickImageCollection^ collection);
static MagickImage^ ExecuteAppendHorizontally(MagickImageCollection^ collection);
static MagickImage^ ExecuteAppendVertically(MagickImageCollection^ collection);
MagickImage^ ExecuteCombine(XmlElement^ element, MagickImageCollection^ collection);
MagickImage^ ExecuteEvaluate(XmlElement^ element, MagickImageCollection^ collection);
static MagickImage^ ExecuteFlatten(MagickImageCollection^ collection);
MagickImage^ ExecuteFx(XmlElement^ element, MagickImageCollection^ collection);
static MagickImage^ ExecuteMerge(MagickImageCollection^ collection);
MagickImage^ ExecuteMontage(XmlElement^ element, MagickImageCollection^ collection);
static MagickImage^ ExecuteMosaic(MagickImageCollection^ collection);
MagickImage^ ExecuteSmushHorizontal(XmlElement^ element, MagickImageCollection^ collection);
MagickImage^ ExecuteSmushVertical(XmlElement^ element, MagickImageCollection^ collection);
static MagickImage^ ExecuteTrimBounds(MagickImageCollection^ collection);
void ExecuteDrawable(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
void ExecuteAffine(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
void ExecuteAlpha(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
void ExecuteArc(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
void ExecuteBezier(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
void ExecuteCircle(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
void ExecuteClipPath(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
void ExecuteColor(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
void ExecuteCompositeImage(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
void ExecuteDashArray(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
void ExecuteDashOffset(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
void ExecuteEllipse(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
void ExecuteFillAlpha(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
void ExecuteFillColor(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
void ExecuteFillRule(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
void ExecuteFont(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
void ExecuteGravity(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
void ExecuteLine(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
void ExecuteMiterLimit(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
void ExecutePath(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
void ExecutePoint(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
void ExecutePointSize(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
void ExecutePolygon(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
void ExecutePolyline(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
void ExecutePushClipPath(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
void ExecutePushPattern(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
void ExecuteRectangle(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
void ExecuteRotation(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
void ExecuteRoundRectangle(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
void ExecuteScaling(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
void ExecuteSkewX(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
void ExecuteSkewY(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
void ExecuteStrokeAlpha(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
void ExecuteStrokeAntialias(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
void ExecuteStrokeColor(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
void ExecuteStrokeLineCap(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
void ExecuteStrokeLineJoin(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
void ExecuteStrokeWidth(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
void ExecuteText(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
void ExecuteTextAntialias(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
void ExecuteTextDecoration(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
void ExecuteTextDirection(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
void ExecuteTextInterlineSpacing(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
void ExecuteTextInterwordSpacing(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
void ExecuteTextKerning(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
void ExecuteTextUnderColor(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
void ExecuteTranslation(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
void ExecuteViewbox(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
void ExecutePath(XmlElement^ element, System::Collections::ObjectModel::Collection<PathBase^>^ paths);
void ExecuteArcAbs(XmlElement^ element, System::Collections::ObjectModel::Collection<PathBase^>^ paths);
void ExecuteArcRel(XmlElement^ element, System::Collections::ObjectModel::Collection<PathBase^>^ paths);
void ExecuteCurvetoAbs(XmlElement^ element, System::Collections::ObjectModel::Collection<PathBase^>^ paths);
void ExecuteCurvetoRel(XmlElement^ element, System::Collections::ObjectModel::Collection<PathBase^>^ paths);
void ExecuteLinetoAbs(XmlElement^ element, System::Collections::ObjectModel::Collection<PathBase^>^ paths);
void ExecuteLinetoHorizontalAbs(XmlElement^ element, System::Collections::ObjectModel::Collection<PathBase^>^ paths);
void ExecuteLinetoHorizontalRel(XmlElement^ element, System::Collections::ObjectModel::Collection<PathBase^>^ paths);
void ExecuteLinetoRel(XmlElement^ element, System::Collections::ObjectModel::Collection<PathBase^>^ paths);
void ExecuteLinetoVerticalAbs(XmlElement^ element, System::Collections::ObjectModel::Collection<PathBase^>^ paths);
void ExecuteLinetoVerticalRel(XmlElement^ element, System::Collections::ObjectModel::Collection<PathBase^>^ paths);
void ExecuteMovetoAbs(XmlElement^ element, System::Collections::ObjectModel::Collection<PathBase^>^ paths);
void ExecuteMovetoRel(XmlElement^ element, System::Collections::ObjectModel::Collection<PathBase^>^ paths);
void ExecuteQuadraticCurvetoAbs(XmlElement^ element, System::Collections::ObjectModel::Collection<PathBase^>^ paths);
void ExecuteQuadraticCurvetoRel(XmlElement^ element, System::Collections::ObjectModel::Collection<PathBase^>^ paths);
void ExecuteSmoothCurvetoAbs(XmlElement^ element, System::Collections::ObjectModel::Collection<PathBase^>^ paths);
void ExecuteSmoothCurvetoRel(XmlElement^ element, System::Collections::ObjectModel::Collection<PathBase^>^ paths);
void ExecuteSmoothQuadraticCurvetoAbs(XmlElement^ element, System::Collections::ObjectModel::Collection<PathBase^>^ paths);
void ExecuteSmoothQuadraticCurvetoRel(XmlElement^ element, System::Collections::ObjectModel::Collection<PathBase^>^ paths);
Coordinate CreateCoordinate(XmlElement^ element);
Collection<Coordinate>^ CreateCoordinates(XmlElement^ element);
static ColorProfile^ CreateColorProfile(XmlElement^ element);
ImageProfile^ CreateImageProfile(XmlElement^ element);
PathArc^ CreatePathArc(XmlElement^ element);
Collection<PathArc^>^ CreatePathArcs(XmlElement^ element);
PathCurveto^ CreatePathCurveto(XmlElement^ element);
Collection<PathCurveto^>^ CreatePathCurvetos(XmlElement^ element);
PathQuadraticCurveto^ CreatePathQuadraticCurveto(XmlElement^ element);
Collection<PathQuadraticCurveto^>^ CreatePathQuadraticCurvetos(XmlElement^ element);
SparseColorArg^ CreateSparseColorArg(XmlElement^ element);
Collection<SparseColorArg^>^ CreateSparseColorArgs(XmlElement^ element);
MagickReadSettings^ CreateMagickReadSettings(XmlElement^ element);
MontageSettings^ CreateMontageSettings(XmlElement^ element);
PixelStorageSettings^ CreatePixelStorageSettings(XmlElement^ element);
QuantizeSettings^ CreateQuantizeSettings(XmlElement^ element);
