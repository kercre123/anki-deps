#ifndef __gl2amdext_h_
#define __gl2amdext_h_
/*
** Copyright (C) 2009-2014 Qualcomm Technologies, Inc.
** All Rights Reserved. Qualcomm Technologies Proprietary and Confidential.
*/

#ifndef __gl2ext_h_
#   include <GLES2/gl2ext.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

#ifndef GL_APIENTRYP
#   define GL_APIENTRYP GL_APIENTRY*
#endif

#   include <KHR/khrplatform.h>
/*------------------------------------------------------------------------*
 * AMD extension tokens and functions
 *------------------------------------------------------------------------*/

/* private extension */
/* This gives ES 1.1 ability to turn on/off multisampling using glEnable/glDisable. In ES 2.0 this is always turned on */
#define GL_MULTISAMPLE                                 0x809D

/* private extension */
/* This gives ES 1.1 ability to query state with GL_FIXED type */
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glGetFixedvAMD (GLenum pname, GLfixed *params);
#endif
typedef void (GL_APIENTRYP PFNGLGETFIXEDVAMDPROC) (GLenum pname, GLfixed *params);

/* QCOM_alpha_test */
#ifndef GL_QCOM_alpha_test
#define GL_QCOM_alpha_test 1
#define GL_ALPHA_TEST_QCOM                             0x0BC0
#define GL_ALPHA_TEST_FUNC_QCOM                        0x0BC1
#define GL_ALPHA_TEST_REF_QCOM                         0x0BC2
/*      GL_NEVER */
/*      GL_LESS */
/*      GL_EQUAL */
/*      GL_LEQUAL */
/*      GL_GREATER */
/*      GL_NOTEQUAL */
/*      GL_GEQUAL */
/*      GL_ALWAYS */
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glAlphaFuncQCOM (GLenum func, GLclampf ref);
#endif
typedef void (GL_APIENTRYP PFNGLALPHAFUNCQCOMPROC) (GLenum func, GLclampf ref);
#endif

/* GL_QCOM_get_shader_stats */
#ifndef GL_QCOM_get_shader_stats
#define GL_QCOM_get_shader_stats 1
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glGetShaderStatsQCOM (GLuint shader, GLsizei maxLength, GLsizei *length, GLuint *data);
#endif
typedef void (GL_APIENTRYP PFNGLGETSHADERSTATSQCOMPROC) (GLuint shader, GLsizei maxLength, GLsizei *length, GLuint *data);
#endif

/* GL_QCOM_get_internal */
#ifndef GL_QCOM_get_internal
#define GL_QCOM_get_internal 1
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL GLenum GL_APIENTRY glExtGetQCOM (const GLenum *param_list, GLsizei buffer_size, void *out_buffer, GLsizei *out_bytes_required);
#endif
typedef GLenum (GL_APIENTRYP PFNGLEXTGETQCOMPROC) (const GLenum *param_list, GLsizei buffer_size, void *out_buffer, GLsizei *out_bytes_required);
#endif

/* AMD_logic_op */
#ifndef GL_AMD_logic_op
#define GL_AMD_logic_op 1
#define GL_COLOR_LOGIC_OP_AMD                          0x0BF2
#define GL_LOGIC_OP_MODE_AMD                           0x0BF0
#define GL_CLEAR_AMD                                   0x1500
#define GL_AND_AMD                                     0x1501
#define GL_AND_REVERSE_AMD                             0x1502
#define GL_COPY_AMD                                    0x1503
#define GL_AND_INVERTED_AMD                            0x1504
#define GL_NOOP_AMD                                    0x1505
#define GL_XOR_AMD                                     0x1506
#define GL_OR_AMD                                      0x1507
#define GL_NOR_AMD                                     0x1508
#define GL_EQUIV_AMD                                   0x1509
#define GL_INVERT_AMD                                  0x150A
#define GL_OR_REVERSE_AMD                              0x150B
#define GL_COPY_INVERTED_AMD                           0x150C
#define GL_OR_INVERTED_AMD                             0x150D
#define GL_NAND_AMD                                    0x150E
#define GL_SET_AMD                                     0x150F
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glLogicOpAMD (GLenum op);
#endif
typedef void (GL_APIENTRYP PFNGLLOGICOPAMDPROC) (GLenum op);
#endif

/* HintTarget */
#define GL_TEXTURE_COMPRESSION_HINT                     0x84EF    // USED FOR AUTOMATIC ONLINE TEXTURE COMPRESSION

/* AMD_fog_blend */
#ifndef GL_AMD_fog_blend
#define GL_AMD_fog_blend 1
#define GL_FOG_COLOR_AMD                                0x0B66
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glFogfvAMD (GLenum pname, const GLfloat *params);
#endif
typedef void (GL_APIENTRYP PFNGLFOGFVAMDPROC) (GLenum pname, const GLfloat *params);
#endif

/* AMD_EGL_image_external_layout_specifier */
#ifndef GL_AMD_EGL_image_external_layout_specifier
#define GL_AMD_EGL_image_external_layout_specifier 1
// YUV format
#define GL_YUV_AMD                                      0x8BC7
// YUV types
#define GL_YUYV_AMD                                     0x8BC8
#define GL_UYVY_AMD                                     0x8BC9
#define GL_NV21_AMD                                     0x8BCA
#define GL_YV12_AMD                                     0x8BCB
#define GL_NV12_TILED_AMD                               0x8BCC
#define GL_NV12_QCOM                                    0x8FB9
// YUV samplers
#define GL_SAMPLER_EXTERNAL_YUYV_AMD                    0x8BCD
#define GL_SAMPLER_EXTERNAL_UYVY_AMD                    0x8BCE
#define GL_SAMPLER_EXTERNAL_NV21_AMD                    0x8BCF
#define GL_SAMPLER_EXTERNAL_YV12_AMD                    0x8BD0
#define GL_SAMPLER_EXTERNAL_NV12_TILED_AMD              0x8BD1
#define GL_SAMPLER_EXTERNAL_NV12_QCOM                   0x8FBA
#endif

/* QCOM_binning_control */
#ifndef GL_QCOM_BINNING_CONTROL
#define GL_QCOM_BINNING_CONTROL 1
#define GL_BINNING_CONTROL_HINT_QCOM                         0x8FB0
#define GL_CPU_OPTIMIZED_QCOM                                0x8FB1
#define GL_GPU_OPTIMIZED_QCOM                                0x8FB2
#endif


/* AMD_panel_settings */
#ifndef GL_AMD_panel_settings
#define GL_AMD_panel_settings 1
#define GL_PANEL_MODE_IFD_AMD                   0x8880 //TEMP TOKEN
#define GL_PANEL_MODE_IFH_AMD            	    0x8881 //TEMP TOKEN
#define GL_PANEL_POWERFLAGS_OVERRIDE_AMD        0x8882 //TEMP TOKEN
#define GL_PANEL_AUTO_TEX_COMPRESSION_AMD       0x8883 //TEMP TOKEN
#endif

/* GL_EXT_frag_depth */
#ifndef GL_EXT_frag_depth
#define GL_EXT_frag_depth 1
#endif

/* QCOM_texture_format_ARGB */
#ifndef GL_QCOM_texture_format_ARGB
#define GL_QCOM_texture_format_ARGB 1
#define GL_ARGB_QCOM                                    0x8FA3
#define GL_UNSIGNED_SHORT_1_5_5_5_QCOM                  0x8FA2
#endif

/* QCOM_texture_format_XRGB */
#ifndef GL_QCOM_texture_format_XRGB
#define GL_QCOM_texture_format_XRGB 1
#define GL_XRGB_QCOM                                    0x8FA1
#define GL_UNSIGNED_SHORT_1_5_5_5_QCOM                  0x8FA2
#endif

/* QCOM_memory_monitor */
#ifndef GL_QCOM_memory_extension
#define GL_QCOM_memory_extension

typedef khronos_int64_t     GLint64QCOM;
#ifndef _LINUX
#ifdef  GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY
glGetMemoryStatsQCOM(GLenum pname, GLenum usage, GLint64QCOM* param);
GL_APICALL void GL_APIENTRY
glGetSizedMemoryStatsQCOM(GLsizei maxcount, GLsizei* count, GLint64QCOM *buf);
#endif
#endif

#define GL_VMEM_TOTAL_AVAILABLE_QCOM                     0x8FA4
#define GL_VMEM_USED_THIS_PROCESS_QCOM                   0x8FA5
#define GL_VMEM_USED_ALL_PROCESSES_QCOM                  0x8FA6
#define GL_VMEM_LARGEST_CONTIGUOUS_BLOCK_REMAINING_QCOM  0x8FA7
#define GL_HEAPMEM_TOTAL_AVAILABLE_QCOM                  0x8FA8
#define GL_HEAPMEM_USED_THIS_PROCESS_QCOM                0x8FA9

#define GL_CLIENT_VERTEX_ARRAY_QCOM                      0x8FAA
#define GL_OTHER_GL_USAGE_QCOM                           0x8FAB
#define GL_EGL_USAGE_QCOM                                0x8FAC
#define GL_2D_USAGE_QCOM                                 0x8FAD
#define GL_OTHER_USAGE_QCOM                              0x8FAE
#define GL_ALL_USAGE_QCOM                                0x8FAF

typedef void (GL_APIENTRYP PFNGLGETMEMORYSTATSQCOM) (GLenum pname, GLenum usage, GLint64QCOM* param);
typedef void (GL_APIENTRYP PFNGLGETSIZEDMEMORYSTATSQCOM) (GLsizei maxcount, GLsizei* count, GLint64QCOM* param);
#endif  //GL_QCOM_memory_extension


/* GL_QCOM_get_device_hw_flags */
#ifndef GL_QCOM_get_device_hw_flags
#define GL_QCOM_get_device_hw_flags 1
#define GL_GET_DEVICE_HW_FLAGS_QCOM                      0x8FB5
#define GL_HW_FLAG_HW_NONE_QCOM                          0x0           
#define GL_HW_FLAG_HW_FOG_QCOM                           0x1           
#define GL_HW_FLAG_HW_FRAGDEPTH_QCOM                     0x2
#define GL_HW_FLAG_HW_3DC_TEXFORMAT_QCOM                 0x4
#endif

/* R8 and RG88 texture definitions. */

#ifndef GL_QCOM_rg_texture_support
#define GL_QCOM_rg_texture_support 1
#define GL_RED_QCOM                                      0x1903
#define GL_RG_QCOM                                       0x8227
#endif

#ifndef GL_XXX_draw_instanced
#define GL_XXX_draw_instanced 1
#define GL_VERTEX_ATTRIB_ARRAY_DIVISOR                   0x88FE
#ifdef  GL_GLEXT_PROTOTYPES
GL_APICALL void         GL_APIENTRY glDrawArraysInstancedXXX (GLenum mode, GLint first, GLsizei count, GLsizei primcount);
GL_APICALL void         GL_APIENTRY glDrawElementsInstancedXXX (GLenum mode, GLsizei count, GLenum type, const GLvoid* indices, GLsizei primcount);
#endif
#endif

#ifndef GL_XXX_multiple_rendertargets
#define GL_XXX_multiple_rendertargets
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glRenderTargetsXXX(GLsizei n, const GLenum *bufs);
#endif
typedef void (GL_APIENTRYP PFNGLRENDERTARGETSXXX)(GLsizei n, const GLenum *bufs);
#define GL_COLOR_ATTACHMENT1_XXX                0x8CE1
#define GL_COLOR_ATTACHMENT2_XXX                0x8CE2
#define GL_COLOR_ATTACHMENT3_XXX                0x8CE3
#define GL_MAX_COLOR_ATTACHMENTS_XXX            0x8CDF
#endif

#ifndef GL_QCOM_overlapping_blit
#define GL_QCOM_overlapping_blit
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glBlitOverlapQCOM(GLint dest_x, GLint dest_y, GLint src_x, GLint src_y, GLint src_width, GLint src_height);
#endif
typedef void (GL_APIENTRYP PFNGLBLITOVERLAPQCOM)(GLint dest_x, GLint dest_y, GLint src_x, GLint src_y, GLint src_width, GLint src_height);
#endif

#ifndef GL_QCOM_compressed_textures
#define GL_QCOM_compressed_textures
#define GL_COMPRESSED_TEXTURES_QCOM             0x8FB6
#endif

/* GL_QCOM_extended_get3 */
#ifndef GL_QCOM_extended_get3
#define GL_QCOM_extended_get3
#define GL_BINNINGCONFIG_BIN_WIDTH_QCOM         0x8BDD
#define GL_BINNINGCONFIG_BIN_HEIGHT_QCOM        0x8BDE
#define GL_BINNINGCONFIG_NUM_BINS_X_QCOM        0x8BDF
#define GL_BINNINGCONFIG_NUM_BINS_Y_QCOM        0x8BE0
#define GL_BINNINGCONFIG_BIN_X_OFFSET_QCOM      0x8BE1
#define GL_BINNINGCONFIG_BIN_Y_OFFSET_QCOM      0x8BE2
#define GL_TEXTURE_EXTERNAL_EGL_IMAGE_QCOM      0x8BE8
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glExtGetBinningConfigParamivQCOM (GLenum pname, GLint *params);
#endif
typedef void (GL_APIENTRYP PFNGLEXTGETBINNINGCONFIGPARAMETERIVQCOMPROC) (GLenum pname, GLint *params);
#endif

#ifndef GL_QCOM_user_clip_planes
#define GL_QCOM_user_clip_planes
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glClipPlanefQCOM(GLenum p, GLfloat equation[4]);
#endif
typedef void (GL_APIENTRYP PFNGLCLIPPLANEFQCOM)(GLenum p, GLfloat equation[4]);
#define GL_MAX_CLIP_PLANES_QCOM         0x0D32
#define GL_CLIP_PLANE0_QCOM             0x3000
#define GL_CLIP_PLANE1_QCOM             0x3001
#define GL_CLIP_PLANE2_QCOM             0x3002
#define GL_CLIP_PLANE3_QCOM             0x3003
#define GL_CLIP_PLANE4_QCOM             0x3004
#define GL_CLIP_PLANE5_QCOM             0x3005
#endif // GL_QCOM_user_clip_planes

#ifndef GL_QCOM_renderbuffer_FP16
#define GL_QCOM_renderbuffer_FP16
#define GL_R16F_QCOM                       0x822D
#define GL_RG16F_QCOM                      0x822F
#define GL_RGB16F_QCOM                     0x881B
#define GL_RGBA16F_QCOM                    0x881A
#endif /* GL_QCOM_renderbuffer_FP16 */

#ifndef GL_QCOM_renderbuffer_UNORM16
#define GL_QCOM_renderbuffer_UNORM16
#define GL_R16_QCOM                        0x822A
#define GL_RG16_QCOM                       0x822C
#define GL_RGB16_QCOM                      0x8054
#define GL_RGBA16_QCOM                     0x805B
#endif /* GL_QCOM_renderbuffer_UNORM16 */

#ifndef GL_QCOM_blend_func_extended
#define GL_QCOM_blend_func_extended
#define GL_SRC1_COLOR_QCOM                    0x88F9
#define GL_SRC1_ALPHA_QCOM                    0x8589
#define GL_ONE_MINUS_SRC1_COLOR_QCOM          0x88FA
#define GL_ONE_MINUS_SRC1_ALPHA_QCOM          0x88FB
#define GL_MAX_DUAL_SOURCE_DRAW_BUFFERS_QCOM  0x88FC
#endif

/* GL_QCOM_GPUSCOPE_API */
#ifndef GL_QCOM_GPUSCOPE_API
#define GL_QCOM_GPUSCOPE_API 1
#ifdef GL_GLEXT_PROTOTYPES
GL_APICALL void GL_APIENTRY glSetGpuScopeCounterQCOM (GLboolean enable, const GLchar *groupname, GLuint counterid, GLuint *size);
GL_APICALL void GL_APIENTRY glGetGpuScopeCounterDataQCOM (GLvoid* data, GLuint size, GLboolean block);
GL_APICALL const GLchar* GL_APIENTRY glGetGpuScopePhaseInfoQCOM (GLuint phase_id);
#endif
typedef void (GL_APIENTRYP PFNGLSETGPUSCOPECOUNTERQCOMPROC) (GLboolean enable, const GLchar *groupname, GLuint counterid, GLuint *size);
typedef void (GL_APIENTRYP PFNGLGETGPUSCOPECOUNTERDATAQCOMPROC) (GLvoid* data, GLuint size, GLboolean block);
typedef const GLchar* (GL_APIENTRYP PFNGLGETGPUSCOPEPHASEINFOQCOMPROC) (GLuint phase_id);
#endif

#ifdef __cplusplus
}
#endif

#endif /* __gl2amdext_h_ */
