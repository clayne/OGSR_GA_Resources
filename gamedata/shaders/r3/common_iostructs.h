#ifndef common_iostructs_h_included
#define common_iostructs_h_included

////////////////////////////////////////////////////////////////
// This file contains io structs:
// v_name : input for vertex shader.
// v2p_name: output for vertex shader.
// p_name : input for pixel shader.
////////////////////////////////////////////////////////////////
#include "common\ogsr_shaders_cfg.h"
////////////////////////////////////////////////////////////////
// TL0uv
struct v_TL0uv_positiont
{
    float4 P : POSITIONT;
    float4 Color : COLOR;
};

struct v_TL0uv
{
    float4 P : POSITION;
    float4 Color : COLOR;
};

struct v2p_TL0uv
{
    float4 Color : COLOR;
    float4 HPos : SV_Position; // Clip-space position  (for rasterization)
};

struct p_TL0uv
{
    float4 Color : COLOR;
    // float4  HPos : SV_Position; // Clip-space position  (for rasterization)
};

////////////////////////////////////////////////////////////////
// TL
struct v_TL_positiont
{
    float4 P : POSITIONT;
    float2 Tex0 : TEXCOORD0;
    float4 Color : COLOR;
};

struct v_TL
{
    float4 P : POSITION;
    float2 Tex0 : TEXCOORD0;
    float4 Color : COLOR;
};

struct v2p_TL
{
    float2 Tex0 : TEXCOORD0;
    float4 Color : COLOR;
    float4 HPos : SV_Position; // Clip-space position  (for rasterization)
};

struct p_TL
{
    float2 Tex0 : TEXCOORD0;
    float4 Color : COLOR;
    // float4  HPos : SV_Position; // Clip-space position  (for rasterization)
};

////////////////////////////////////////////////////////////////
// TL2uv
struct v_TL2uv
{
    float4 P : POSITIONT;
    float2 Tex0 : TEXCOORD0;
    float2 Tex1 : TEXCOORD1;
    float4 Color : COLOR;
};

struct v2p_TL2uv
{
    float2 Tex0 : TEXCOORD0;
    float2 Tex1 : TEXCOORD1;
    float4 Color : COLOR;
    float4 HPos : SV_Position; // Clip-space position  (for rasterization)
};

struct p_TL2uv
{
    float2 Tex0 : TEXCOORD0;
    float2 Tex1 : TEXCOORD1;
    float4 Color : COLOR;
};
////////////////////////////////////////////////////////////////
// postpr
struct v_postpr
{
    float4 P : POSITIONT;
    float2 Tex0 : TEXCOORD0; // base1 (duality)
    float2 Tex1 : TEXCOORD1; // base2 (duality)
    float2 Tex2 : TEXCOORD2; // base  (noise)
    float4 Color : COLOR0; // multiplier, color.w = noise_amount
    float4 Gray : COLOR1; // (.3,.3,.3.,amount)
};

struct v2p_postpr
{
    float2 Tex0 : TEXCOORD0; // base1 (duality)
    float2 Tex1 : TEXCOORD1; // base2 (duality)
    float2 Tex2 : TEXCOORD2; // base  (noise)
    float4 Color : COLOR0; // multiplier, color.w = noise_amount
    float4 Gray : COLOR1; // (.3,.3,.3.,amount)
    float4 HPos : SV_Position; // Clip-space position  (for rasterization)
};

struct p_postpr
{
    float2 Tex0 : TEXCOORD0; // base1 (duality)
    float2 Tex1 : TEXCOORD1; // base2 (duality)
    float2 Tex2 : TEXCOORD2; // base  (noise)
    float4 Color : COLOR0; // multiplier, color.w = noise_amount
    float4 Gray : COLOR1; // (.3,.3,.3.,amount)
    // float4  HPos : SV_Position; // Clip-space position  (for rasterization)
};
////////////////////////////////////////////////////////////////
// build (bloom_build)
struct v_build
{
    float4 P : POSITIONT;
    float2 Tex0 : TEXCOORD0;
    float2 Tex1 : TEXCOORD1;
    float2 Tex2 : TEXCOORD2;
    float2 Tex3 : TEXCOORD3;
};

struct v2p_build
{
    float2 Tex0 : TEXCOORD0;
    float2 Tex1 : TEXCOORD1;
    float2 Tex2 : TEXCOORD2;
    float2 Tex3 : TEXCOORD3;
    float4 HPos : SV_Position; // Clip-space position  (for rasterization)
};

struct p_build
{
    float2 Tex0 : TEXCOORD0;
    float2 Tex1 : TEXCOORD1;
    float2 Tex2 : TEXCOORD2;
    float2 Tex3 : TEXCOORD3;
};
////////////////////////////////////////////////////////////////
// filter (bloom_filter)
struct v_filter
{
    float4 P : POSITIONT;
    float4 Tex0 : TEXCOORD0;
    float4 Tex1 : TEXCOORD1;
    float4 Tex2 : TEXCOORD2;
    float4 Tex3 : TEXCOORD3;
    float4 Tex4 : TEXCOORD4;
    float4 Tex5 : TEXCOORD5;
    float4 Tex6 : TEXCOORD6;
    float4 Tex7 : TEXCOORD7;
};

struct v2p_filter
{
    float4 Tex0 : TEXCOORD0;
    float4 Tex1 : TEXCOORD1;
    float4 Tex2 : TEXCOORD2;
    float4 Tex3 : TEXCOORD3;
    float4 Tex4 : TEXCOORD4;
    float4 Tex5 : TEXCOORD5;
    float4 Tex6 : TEXCOORD6;
    float4 Tex7 : TEXCOORD7;
    float4 HPos : SV_Position; // Clip-space position  (for rasterization)
};

struct p_filter
{
    float4 Tex0 : TEXCOORD0;
    float4 Tex1 : TEXCOORD1;
    float4 Tex2 : TEXCOORD2;
    float4 Tex3 : TEXCOORD3;
    float4 Tex4 : TEXCOORD4;
    float4 Tex5 : TEXCOORD5;
    float4 Tex6 : TEXCOORD6;
    float4 Tex7 : TEXCOORD7;
};

////////////////////////////////////////////////////////////////
// aa_AA
struct v_aa_AA
{
    float4 P : POSITIONT;
    float2 Tex0 : TEXCOORD0;
    float2 Tex1 : TEXCOORD1;
    float2 Tex2 : TEXCOORD2;
    float2 Tex3 : TEXCOORD3;
    float2 Tex4 : TEXCOORD4;
    float4 Tex5 : TEXCOORD5;
    float4 Tex6 : TEXCOORD6;
};

struct v2p_aa_AA
{
    float2 Tex0 : TEXCOORD0;
    float2 Tex1 : TEXCOORD1;
    float2 Tex2 : TEXCOORD2;
    float2 Tex3 : TEXCOORD3;
    float2 Tex4 : TEXCOORD4;
    float4 Tex5 : TEXCOORD5;
    float4 Tex6 : TEXCOORD6;
    float4 HPos : SV_Position; // Clip-space position  (for rasterization)
};

struct p_aa_AA
{
    float2 Tex0 : TEXCOORD0;
    float2 Tex1 : TEXCOORD1;
    float2 Tex2 : TEXCOORD2;
    float2 Tex3 : TEXCOORD3;
    float2 Tex4 : TEXCOORD4;
    float4 Tex5 : TEXCOORD5;
    float4 Tex6 : TEXCOORD6;
};

struct p_aa_AA_sun
{
    float2 tc : TEXCOORD0;
    float2 unused : TEXCOORD1;
    float2 LT : TEXCOORD2;
    float2 RT : TEXCOORD3;
    float2 LB : TEXCOORD4;
    float2 RB : TEXCOORD5;
};

////////////////////////////////////////////////////////////////
// dumb
struct v_dumb
{
    float4 P : POSITION; // Clip-space position  (for rasterization)
};

struct v2p_dumb
{
    float4 HPos : SV_Position; // Clip-space position  (for rasterization)
};

////////////////////////////////////////////////////////////////
// Volume
struct v2p_volume
{
    float4 tc : TEXCOORD0;
#ifdef USE_SJITTER
    float4 tcJ : TEXCOORD1;
#endif
    float4 hpos : SV_Position; // Clip-space position  (for rasterization)
};
struct p_volume
{
    float4 tc : TEXCOORD0;
#ifdef USE_SJITTER
    float4 tcJ : TEXCOORD1;
#endif
};
////////////////////////////////////////////////////////////////
// Static
struct v_static
{
    float4 Nh : NORMAL; // (nx,ny,nz,hemi occlusion)
    float4 T : TANGENT; // tangent
    float4 B : BINORMAL; // binormal
    int2 tc : TEXCOORD0; // (u,v)
#ifdef USE_LM_HEMI
    int2 lmh : TEXCOORD1; // (lmu,lmv)
#endif
    float4 P : POSITION; // (float,float,float,1)
};

struct v_static_color
{
    float4 Nh : NORMAL; // (nx,ny,nz,hemi occlusion)
    float4 T : TANGENT; // tangent
    float4 B : BINORMAL; // binormal
    int2 tc : TEXCOORD0; // (u,v)
#ifdef USE_LM_HEMI
    int2 lmh : TEXCOORD1; // (lmu,lmv)
#endif
    float4 color : COLOR0; // (r,g,b,dir-occlusion) // Swizzle before use!!!
    float4 P : POSITION; // (float,float,float,1)
};

////////////////////////////////////////////////////////////////
// defer
struct f_deffer
{
    float4 position : SV_Target0; // xy=encoded normal, z = pz, w = encoded(m-id,hemi)
    float4 C : SV_Target1; // r, g, b,  gloss
    float2 Velocity : SV_Target2; // XY - motion vectors
    float4 H : SV_Target3;
#ifdef EXTEND_F_DEFFER
    uint mask : SV_COVERAGE;
#endif
};

struct gbuffer_data
{
    float3 P; // position.( mtl or sun )
    float mtl; // material id
    float3 N; // normal
    float hemi; // AO
    float3 C;
    float gloss;
#ifdef REFLECTIONS_ONLY_ON_TERRAIN
    bool refl_flag;
#endif
};

////////////////////////////////////////////////////////////////
// Defer bumped
struct v2p_bumped
{
#if defined(USE_R2_STATIC_SUN) && !defined(USE_LM_HEMI)
    float4 tcdh : TEXCOORD0; // Texture coordinates,         w=sun_occlusion
#else
    float2 tcdh : TEXCOORD0; // Texture coordinates
#endif
    float4 position : TEXCOORD1; // position + hemi
    float3 M1 : TEXCOORD2; // nmap 2 eye - 1
    float3 M2 : TEXCOORD3; // nmap 2 eye - 2
    float3 M3 : TEXCOORD4; // nmap 2 eye - 3
    float4 RDrops : TEXCOORD7; // SSS Update 17 - HUD raindrops
#ifdef USE_TDETAIL
    float2 tcdbump : TEXCOORD5; // d-bump
#endif
#ifdef USE_LM_HEMI
    float2 lmh : TEXCOORD6; // lm-hemi
#endif
    float4 hpos_curr : TEXCOORD8;
    float4 hpos_old : TEXCOORD9;
    float4 hpos : SV_Position;
};

struct p_bumped
{
#if defined(USE_R2_STATIC_SUN) && !defined(USE_LM_HEMI)
    float4 tcdh : TEXCOORD0; // Texture coordinates,         w=sun_occlusion
#else
    float2 tcdh : TEXCOORD0; // Texture coordinates
#endif
    float4 position : TEXCOORD1; // position + hemi
    float3 M1 : TEXCOORD2; // nmap 2 eye - 1
    float3 M2 : TEXCOORD3; // nmap 2 eye - 2
    float3 M3 : TEXCOORD4; // nmap 2 eye - 3
    float4 RDrops : TEXCOORD7; // SSS Update 17 - HUD raindrops
#ifdef USE_TDETAIL
    float2 tcdbump : TEXCOORD5; // d-bump
#endif
#ifdef USE_LM_HEMI
    float2 lmh : TEXCOORD6; // lm-hemi
#endif
    float4 hpos_curr : TEXCOORD8;
    float4 hpos_old : TEXCOORD9;
};
////////////////////////////////////////////////////////////////
// Defer flat
struct v2p_flat
{
#if ((defined(USE_R2_STATIC_SUN) && !defined(USE_LM_HEMI)) || defined(USE_GRASS_WAVE))
    float4 tcdh : TEXCOORD0; // Texture coordinates,         w=sun_occlusion
#else
    float2 tcdh : TEXCOORD0; // Texture coordinates
#endif
    float4 position : TEXCOORD1; // position + hemi
    float3 N : TEXCOORD2; // Eye-space normal        (for lighting)
    float4 RDrops : TEXCOORD7; // SSS Update 17 - HUD raindrops
#ifdef USE_TDETAIL
    float2 tcdbump : TEXCOORD3; // d-bump
#endif
#ifdef USE_LM_HEMI
    float2 lmh : TEXCOORD4; // lm-hemi
#endif
    float4 hpos_curr : TEXCOORD8;
    float4 hpos_old : TEXCOORD9;
    float4 hpos : SV_Position;
};

struct p_flat
{
#if ((defined(USE_R2_STATIC_SUN) && !defined(USE_LM_HEMI)) || defined(USE_GRASS_WAVE))
    float4 tcdh : TEXCOORD0; // Texture coordinates,         w=sun_occlusion
#else
    float2 tcdh : TEXCOORD0; // Texture coordinates
#endif
    float4 position : TEXCOORD1; // position + hemi
    float3 N : TEXCOORD2; // Eye-space normal        (for lighting)
    float4 RDrops : TEXCOORD7; // SSS Update 17 - HUD raindrops
#ifdef USE_TDETAIL
    float2 tcdbump : TEXCOORD3; // d-bump
#endif
#ifdef USE_LM_HEMI
    float2 lmh : TEXCOORD4; // lm-hemi
#endif
    float4 hpos_curr : TEXCOORD8;
    float4 hpos_old : TEXCOORD9;
};

////////////////////////////////////////////////////////////////
// Shadow

struct v2p_shadow_direct_aref
{
    float2 tc0 : TEXCOORD1; // Diffuse map for aref
    float4 hpos : SV_Position; // Clip-space position         (for rasterization)
};

struct v2p_shadow_direct
{
    float4 hpos : SV_Position; // Clip-space position         (for rasterization)
};

struct p_shadow_direct_aref
{
    float2 tc0 : TEXCOORD1; // Diffuse map for aref
};

////////////////////////////////////////////////////////////////
// Model
struct v_model
{
    float4 P : POSITION; // (float,float,float,1)
    float3 N : NORMAL; // (nx,ny,nz)
    float3 T : TANGENT; // (nx,ny,nz)
    float3 B : BINORMAL; // (nx,ny,nz)
    float2 tc : TEXCOORD0; // (u,v)
#ifndef SKIN_NONE
    float4 P_old : TEXCOORD1; // Previous frame pos
#endif
};

////////////////////////////////////////////////////////////////
// Tree
struct v_tree
{
    float4 P : POSITION; // (float,float,float,1)
    float4 Nh : NORMAL; // (nx,ny,nz)
    float3 T : TANGENT; // tangent
    float3 B : BINORMAL; // binormal
    int4 tc : TEXCOORD0; // (u,v,frac,???)

    float4 m0 : COLOR0;
    float4 m1 : COLOR1;
    float4 m2 : COLOR2;
    float4 consts : COLOR3;
};

////////////////////////////////////////////////////////////////
// Details
struct v_detail
{
    float4 pos : POSITION; // (float,float,float,0)
    float4 misc : NORMAL; // (u,v,frac,0)

    float4 m0 : COLOR0;
    float4 m1 : COLOR1;
    float4 m2 : COLOR2;
    float4 consts : COLOR3;
    float4 tnorm : COLOR4;
};
////////for screenspace transformation
struct p_screen
{
    float4 hpos : SV_Position;
    float2 tc0 : TEXCOORD0; // Texture coordinates         (for sampling maps)
};

struct v2p_screen
{
    float2 tc0 : TEXCOORD0;
#ifdef SM_2_0
    float4 HPos : POSITION; // Clip-space position (for rasterization)
#else
    float4 HPos : POSITIONT; // Clip-space position (for rasterization)
#endif
};
////////////////////////////////////////////////////////////////

#endif // common_iostructs_h_included