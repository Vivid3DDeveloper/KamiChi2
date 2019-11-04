#include "fontConvert.bmx.gui.debug.win32.x64.h"
static BBString _s2={
	&bbStringClass,
	1,
	{48}
};
static BBString _s5={
	&bbStringClass,
	3,
	{67,72,58}
};
static BBString _s4={
	&bbStringClass,
	3,
	{67,87,58}
};
static BBString _s0={
	&bbStringClass,
	35,
	{78,111,32,115,112,97,99,101,32,116,111,32,105,110,99,114,101
	,97,115,101,32,100,101,113,117,101,32,99,97,112,97,99,105
	,116,121}
};
static BBString _s3={
	&bbStringClass,
	2,
	{84,58}
};
static BBString _s1={
	&bbStringClass,
	7,
	{102,111,110,116,46,112,102}
};
struct BBDebugScope_1{int kind; const char *name; BBDebugDecl decls[2]; };
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
struct BBDebugScope_3{int kind; const char *name; BBDebugDecl decls[4]; };
static int _bb_main_inited = 0;
int _bb_main(){
	if (!_bb_main_inited) {
		_bb_main_inited = 1;
		__bb_brl_blitz_blitz();
		__bb_brl_appstub_appstub();
		__bb_brl_audio_audio();
		__bb_brl_bank_bank();
		__bb_brl_bankstream_bankstream();
		__bb_brl_base64_base64();
		__bb_brl_basic_basic();
		__bb_brl_bmploader_bmploader();
		__bb_brl_clipboard_clipboard();
		__bb_brl_collections_collections();
		__bb_brl_crypto_crypto();
		__bb_brl_d3d7max2d_d3d7max2d();
		__bb_brl_d3d9max2d_d3d9max2d();
		__bb_brl_data_data();
		__bb_brl_directsoundaudio_directsoundaudio();
		__bb_brl_eventqueue_eventqueue();
		__bb_brl_freeaudioaudio_freeaudioaudio();
		__bb_brl_freetypefont_freetypefont();
		__bb_brl_glgraphics_glgraphics();
		__bb_brl_glmax2d_glmax2d();
		__bb_brl_gnet_gnet();
		__bb_brl_jpgloader_jpgloader();
		__bb_brl_json_json();
		__bb_brl_map_map();
		__bb_brl_matrix_matrix();
		__bb_brl_maxlua_maxlua();
		__bb_brl_maxutil_maxutil();
		__bb_brl_oggloader_oggloader();
		__bb_brl_openalaudio_openalaudio();
		__bb_brl_pngloader_pngloader();
		__bb_brl_quaternion_quaternion();
		__bb_brl_retro_retro();
		__bb_brl_tgaloader_tgaloader();
		__bb_brl_threadpool_threadpool();
		__bb_brl_timer_timer();
		__bb_brl_timerdefault_timerdefault();
		__bb_brl_volumes_volumes();
		__bb_brl_wavloader_wavloader();
		__bb_brl_xml_xml();
		__bb_pub_freejoy_freejoy();
		__bb_pub_freeprocess_freeprocess();
		__bb_pub_glad_glad();
		__bb_pub_macos_macos();
		__bb_pub_nx_nx();
		__bb_pub_opengles_opengles();
		__bb_pub_vulkan_vulkan();
		__bb_pub_xmmintrin_xmmintrin();
		struct brl_stream_TStream_obj* bbt_fs=(struct brl_stream_TStream_obj*)(&bbNullObject);
		struct BBDebugScope_1 __scope = {
			BBDEBUGSCOPE_FUNCTION,
			"fontConvert",
			{
				{
					BBDEBUGDECL_LOCAL,
					"fs",
					":TStream",
					.var_address=&bbt_fs
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/Git/KamiChi2/Tools/fontConv/fontConvert.bmx", 3, 0};
		bbOnDebugEnterStm(&__stmt_0);
		brl_graphics_Graphics(800,600,0,60,0);
		struct BBDebugStm __stmt_1 = {"C:/Git/KamiChi2/Tools/fontConv/fontConvert.bmx", 6, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_fs=(struct brl_stream_TStream_obj*)brl_filesystem_WriteFile((BBOBJECT)&_s1);
		struct BBDebugStm __stmt_2 = {"C:/Git/KamiChi2/Tools/fontConv/fontConvert.bmx", 8, 0};
		bbOnDebugEnterStm(&__stmt_2);
		{
			BBINT bbt_i=0;
			for(;(bbt_i<255);bbt_i=(bbt_i+1)){
				BBSTRING bbt_c=(&bbEmptyString);
				struct brl_pixmap_TPixmap_obj* bbt_pix=(struct brl_pixmap_TPixmap_obj*)(&bbNullObject);
				struct BBDebugScope_3 __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						{
							BBDEBUGDECL_LOCAL,
							"i",
							"i",
							.var_address=&bbt_i
						},
						{
							BBDEBUGDECL_LOCAL,
							"c",
							"$",
							.var_address=&bbt_c
						},
						{
							BBDEBUGDECL_LOCAL,
							"pix",
							":TPixmap",
							.var_address=&bbt_pix
						},
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/Git/KamiChi2/Tools/fontConv/fontConvert.bmx", 10, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbt_c=&_s2;
				struct BBDebugStm __stmt_1 = {"C:/Git/KamiChi2/Tools/fontConv/fontConvert.bmx", 12, 0};
				bbOnDebugEnterStm(&__stmt_1);
				(bbt_c)->buf[0U]=bbt_i;
				struct BBDebugStm __stmt_2 = {"C:/Git/KamiChi2/Tools/fontConv/fontConvert.bmx", 15, 0};
				bbOnDebugEnterStm(&__stmt_2);
				brl_standardio_Print(bbStringConcat(&_s3,bbt_c));
				struct BBDebugStm __stmt_3 = {"C:/Git/KamiChi2/Tools/fontConv/fontConvert.bmx", 16, 0};
				bbOnDebugEnterStm(&__stmt_3);
				brl_max2d_Cls();
				struct BBDebugStm __stmt_4 = {"C:/Git/KamiChi2/Tools/fontConv/fontConvert.bmx", 17, 0};
				bbOnDebugEnterStm(&__stmt_4);
				brl_max2d_DrawText(bbt_c,0.000000000f,0.000000000f);
				struct BBDebugStm __stmt_5 = {"C:/Git/KamiChi2/Tools/fontConv/fontConvert.bmx", 20, 0};
				bbOnDebugEnterStm(&__stmt_5);
				bbt_pix=(struct brl_pixmap_TPixmap_obj*)brl_max2d_GrabPixmap(0,0,brl_max2d_TextWidth(bbt_c),brl_max2d_TextHeight(bbt_c));
				struct BBDebugStm __stmt_6 = {"C:/Git/KamiChi2/Tools/fontConv/fontConvert.bmx", 21, 0};
				bbOnDebugEnterStm(&__stmt_6);
				brl_stream_WriteInt((struct brl_stream_TStream_obj*)bbt_fs,brl_max2d_TextWidth(bbt_c));
				struct BBDebugStm __stmt_7 = {"C:/Git/KamiChi2/Tools/fontConv/fontConvert.bmx", 22, 0};
				bbOnDebugEnterStm(&__stmt_7);
				brl_stream_WriteInt((struct brl_stream_TStream_obj*)bbt_fs,brl_max2d_TextHeight(bbt_c));
				struct BBDebugStm __stmt_8 = {"C:/Git/KamiChi2/Tools/fontConv/fontConvert.bmx", 24, 0};
				bbOnDebugEnterStm(&__stmt_8);
				brl_standardio_Print(bbStringConcat(&_s4,bbStringFromInt(brl_max2d_TextWidth(bbt_c))));
				struct BBDebugStm __stmt_9 = {"C:/Git/KamiChi2/Tools/fontConv/fontConvert.bmx", 25, 0};
				bbOnDebugEnterStm(&__stmt_9);
				brl_standardio_Print(bbStringConcat(&_s5,bbStringFromInt(brl_max2d_TextHeight(bbt_c))));
				struct BBDebugStm __stmt_10 = {"C:/Git/KamiChi2/Tools/fontConv/fontConvert.bmx", 27, 0};
				bbOnDebugEnterStm(&__stmt_10);
				{
					BBINT bbt_y=0;
					BBINT bbt_=brl_max2d_TextHeight(bbt_c);
					for(;(bbt_y<bbt_);bbt_y=(bbt_y+1)){
						struct BBDebugScope_1 __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								{
									BBDEBUGDECL_LOCAL,
									"y",
									"i",
									.var_address=&bbt_y
								},
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"C:/Git/KamiChi2/Tools/fontConv/fontConvert.bmx", 28, 0};
						bbOnDebugEnterStm(&__stmt_0);
						{
							BBINT bbt_x=0;
							BBINT bbt_2=brl_max2d_TextWidth(bbt_c);
							for(;(bbt_x<bbt_2);bbt_x=(bbt_x+1)){
								BBBYTE* bbt_byt=0;
								struct BBDebugScope_2 __scope = {
									BBDEBUGSCOPE_LOCALBLOCK,
									0,
									{
										{
											BBDEBUGDECL_LOCAL,
											"x",
											"i",
											.var_address=&bbt_x
										},
										{
											BBDEBUGDECL_LOCAL,
											"byt",
											"*b",
											.var_address=&bbt_byt
										},
										BBDEBUGDECL_END 
									}
								};
								bbOnDebugEnterScope(&__scope);
								struct BBDebugStm __stmt_0 = {"C:/Git/KamiChi2/Tools/fontConv/fontConvert.bmx", 30, 0};
								bbOnDebugEnterStm(&__stmt_0);
								bbt_byt=((struct brl_pixmap_TPixmap_obj*)bbNullObjectTest(bbt_pix))->clas->m_PixelPtr_ii((struct brl_pixmap_TPixmap_obj*)bbt_pix,bbt_x,bbt_y);
								struct BBDebugStm __stmt_1 = {"C:/Git/KamiChi2/Tools/fontConv/fontConvert.bmx", 32, 0};
								bbOnDebugEnterStm(&__stmt_1);
								brl_stream_WriteByte((struct brl_stream_TStream_obj*)bbt_fs,((BBINT)bbt_byt[0]));
								struct BBDebugStm __stmt_2 = {"C:/Git/KamiChi2/Tools/fontConv/fontConvert.bmx", 33, 0};
								bbOnDebugEnterStm(&__stmt_2);
								brl_stream_WriteByte((struct brl_stream_TStream_obj*)bbt_fs,((BBINT)bbt_byt[1]));
								struct BBDebugStm __stmt_3 = {"C:/Git/KamiChi2/Tools/fontConv/fontConvert.bmx", 34, 0};
								bbOnDebugEnterStm(&__stmt_3);
								brl_stream_WriteByte((struct brl_stream_TStream_obj*)bbt_fs,((BBINT)bbt_byt[2]));
								struct BBDebugStm __stmt_4 = {"C:/Git/KamiChi2/Tools/fontConv/fontConvert.bmx", 35, 0};
								bbOnDebugEnterStm(&__stmt_4);
								if(((BBINT)((bbt_byt[0]+bbt_byt[1])+bbt_byt[2]))>64){
									struct BBDebugScope __scope = {
										BBDEBUGSCOPE_LOCALBLOCK,
										0,
										{
											BBDEBUGDECL_END 
										}
									};
									bbOnDebugEnterScope(&__scope);
									struct BBDebugStm __stmt_0 = {"C:/Git/KamiChi2/Tools/fontConv/fontConvert.bmx", 36, 0};
									bbOnDebugEnterStm(&__stmt_0);
									brl_stream_WriteByte((struct brl_stream_TStream_obj*)bbt_fs,255);
									bbOnDebugLeaveScope();
								}else{
									struct BBDebugScope __scope = {
										BBDEBUGSCOPE_LOCALBLOCK,
										0,
										{
											BBDEBUGDECL_END 
										}
									};
									bbOnDebugEnterScope(&__scope);
									struct BBDebugStm __stmt_0 = {"C:/Git/KamiChi2/Tools/fontConv/fontConvert.bmx", 38, 0};
									bbOnDebugEnterStm(&__stmt_0);
									brl_stream_WriteByte((struct brl_stream_TStream_obj*)bbt_fs,0);
									bbOnDebugLeaveScope();
								}
								bbOnDebugLeaveScope();
							}
						}
						bbOnDebugLeaveScope();
					}
				}
				bbOnDebugLeaveScope();
			}
		}
		struct BBDebugStm __stmt_3 = {"C:/Git/KamiChi2/Tools/fontConv/fontConvert.bmx", 47, 0};
		bbOnDebugEnterStm(&__stmt_3);
		((struct brl_stream_TStream_obj*)bbNullObjectTest(bbt_fs))->clas->m_Flush((struct brl_stream_TIO_obj*)bbt_fs);
		struct BBDebugStm __stmt_4 = {"C:/Git/KamiChi2/Tools/fontConv/fontConvert.bmx", 49, 0};
		bbOnDebugEnterStm(&__stmt_4);
		brl_filesystem_CloseFile((struct brl_stream_TStream_obj*)bbt_fs);
		bbOnDebugLeaveScope();
		return 0;
	}
	return 0;
}