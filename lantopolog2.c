int __usercall sub_55455C@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ebx>, void *a4@<edi>, void **a5@<esi>)
{
  char v5; // zf
  char *v6; // eax
  int v7; // edx
  int v8; // edx
  int v9; // edx
  char *v10; // eax
  char *v11; // eax
  char *v12; // eax
  int v13; // eax
  unsigned __int16 v14; // ax
  int v15; // eax
  int v16; // eax
  HWND Handle; // eax
  int v18; // edx
  char *v19; // eax
  char *v20; // eax
  char *v21; // eax
  char *v22; // eax
  char v23; // cf
  struct _EXCEPTION_REGISTRATION_RECORD *v24; // ebx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // ecx
  __int32 v29; // ecx
  long double v30; // fst7
  int v31; // eax
  int v32; // eax
  int v33; // edx
  int v34; // ecx
  char *v35; // eax
  char *v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  unsigned int v47; // [esp-18h] [ebp-410h] BYREF
  const char *v48; // [esp-14h] [ebp-40Ch]
  __int64 **v49; // [esp-10h] [ebp-408h]
  unsigned __int64 v50; // [esp-Ch] [ebp-404h] BYREF
  int v51; // [esp-4h] [ebp-3FCh]
  int v52; // [esp+0h] [ebp-3F8h]
  char *v53; // [esp+Ch] [ebp-3ECh] BYREF
  __int32 v54; // [esp+10h] [ebp-3E8h] BYREF
  __int64 **v55; // [esp+14h] [ebp-3E4h] BYREF
  __int64 *v56; // [esp+18h] [ebp-3E0h] BYREF
  OLECHAR *v57; // [esp+1Ch] [ebp-3DCh] BYREF
  const CHAR *v58; // [esp+20h] [ebp-3D8h] BYREF
  OLECHAR *v59; // [esp+24h] [ebp-3D4h] BYREF
  char *v60; // [esp+28h] [ebp-3D0h] BYREF
  __int32 v61; // [esp+2Ch] [ebp-3CCh] BYREF
  char *v62; // [esp+30h] [ebp-3C8h] BYREF
  __int64 *v63; // [esp+34h] [ebp-3C4h] BYREF
  int v64; // [esp+38h] [ebp-3C0h] BYREF
  int v65; // [esp+3Ch] [ebp-3BCh] BYREF
  __int32 v66; // [esp+40h] [ebp-3B8h] BYREF
  __int32 v67; // [esp+44h] [ebp-3B4h] BYREF
  char *v68; // [esp+48h] [ebp-3B0h] BYREF
  int v69; // [esp+4Ch] [ebp-3ACh] BYREF
  __int64 *v70; // [esp+50h] [ebp-3A8h] BYREF
  char *v71; // [esp+54h] [ebp-3A4h] BYREF
  __int32 v72; // [esp+58h] [ebp-3A0h] BYREF
  char *v73; // [esp+5Ch] [ebp-39Ch] BYREF
  __int32 v74; // [esp+60h] [ebp-398h] BYREF
  char *v75; // [esp+64h] [ebp-394h] BYREF
  __int32 v76; // [esp+68h] [ebp-390h] BYREF
  int v77; // [esp+6Ch] [ebp-38Ch] BYREF
  __int32 v78; // [esp+70h] [ebp-388h] BYREF
  __int32 v79; // [esp+74h] [ebp-384h] BYREF
  int v80; // [esp+78h] [ebp-380h] BYREF
  int v81; // [esp+7Ch] [ebp-37Ch] BYREF
  int v82; // [esp+80h] [ebp-378h] BYREF
  __int32 v83; // [esp+84h] [ebp-374h] BYREF
  char *v84; // [esp+88h] [ebp-370h] BYREF
  __int64 **v85; // [esp+8Ch] [ebp-36Ch] BYREF
  __int32 v86; // [esp+90h] [ebp-368h] BYREF
  __int32 v87; // [esp+94h] [ebp-364h] BYREF
  __int32 v88; // [esp+98h] [ebp-360h] BYREF
  __int64 *v89; // [esp+9Ch] [ebp-35Ch] BYREF
  __int32 v90; // [esp+A0h] [ebp-358h] BYREF
  __int32 v91; // [esp+A4h] [ebp-354h] BYREF
  __int64 *v92; // [esp+A8h] [ebp-350h] BYREF
  __int64 **v93; // [esp+ACh] [ebp-34Ch] BYREF
  __int32 v94; // [esp+B0h] [ebp-348h] BYREF
  __int64 **v95; // [esp+B4h] [ebp-344h] BYREF
  __int32 v96; // [esp+B8h] [ebp-340h] BYREF
  __int64 **v97; // [esp+BCh] [ebp-33Ch] BYREF
  __int32 v98; // [esp+C0h] [ebp-338h] BYREF
  __int64 **v99; // [esp+C4h] [ebp-334h] BYREF
  __int32 v100; // [esp+C8h] [ebp-330h] BYREF
  __int64 **v101; // [esp+CCh] [ebp-32Ch] BYREF
  __int32 v102; // [esp+D0h] [ebp-328h] BYREF
  __int64 **v103; // [esp+D4h] [ebp-324h] BYREF
  __int32 v104; // [esp+D8h] [ebp-320h] BYREF
  __int64 **v105; // [esp+DCh] [ebp-31Ch] BYREF
  __int32 v106; // [esp+E0h] [ebp-318h] BYREF
  __int32 v107; // [esp+E4h] [ebp-314h] BYREF
  __int32 v108; // [esp+E8h] [ebp-310h] BYREF
  __int32 v109; // [esp+ECh] [ebp-30Ch] BYREF
  __int32 v110; // [esp+F0h] [ebp-308h] BYREF
  __int32 v111; // [esp+F4h] [ebp-304h] BYREF
  __int32 v112; // [esp+F8h] [ebp-300h] BYREF
  __int32 v113; // [esp+FCh] [ebp-2FCh] BYREF
  __int32 v114; // [esp+100h] [ebp-2F8h] BYREF
  __int32 v115; // [esp+104h] [ebp-2F4h] BYREF
  __int32 v116; // [esp+108h] [ebp-2F0h] BYREF
  __int32 v117; // [esp+10Ch] [ebp-2ECh] BYREF
  __int32 v118; // [esp+110h] [ebp-2E8h] BYREF
  __int32 v119; // [esp+114h] [ebp-2E4h] BYREF
  __int32 v120; // [esp+118h] [ebp-2E0h] BYREF
  __int32 v121; // [esp+11Ch] [ebp-2DCh] BYREF
  __int32 v122; // [esp+120h] [ebp-2D8h] BYREF
  __int32 v123; // [esp+124h] [ebp-2D4h] BYREF
  __int32 v124; // [esp+128h] [ebp-2D0h] BYREF
  __int32 v125; // [esp+12Ch] [ebp-2CCh] BYREF
  __int32 v126; // [esp+130h] [ebp-2C8h] BYREF
  __int32 v127; // [esp+134h] [ebp-2C4h] BYREF
  __int32 v128; // [esp+138h] [ebp-2C0h] BYREF
  __int32 v129; // [esp+13Ch] [ebp-2BCh] BYREF
  __int32 v130; // [esp+140h] [ebp-2B8h] BYREF
  char *v131; // [esp+144h] [ebp-2B4h] BYREF
  __int32 v132; // [esp+148h] [ebp-2B0h] BYREF
  __int32 v133; // [esp+14Ch] [ebp-2ACh] BYREF
  __int32 v134; // [esp+150h] [ebp-2A8h] BYREF
  __int32 v135; // [esp+154h] [ebp-2A4h] BYREF
  char *v136; // [esp+158h] [ebp-2A0h] BYREF
  char *v137; // [esp+15Ch] [ebp-29Ch] BYREF
  char *v138; // [esp+160h] [ebp-298h] BYREF
  char *v139; // [esp+164h] [ebp-294h] BYREF
  __int32 v140; // [esp+168h] [ebp-290h] BYREF
  __int32 v141; // [esp+16Ch] [ebp-28Ch] BYREF
  __int32 v142; // [esp+170h] [ebp-288h] BYREF
  __int32 v143; // [esp+174h] [ebp-284h] BYREF
  __int32 v144; // [esp+178h] [ebp-280h] BYREF
  __int32 v145; // [esp+17Ch] [ebp-27Ch] BYREF
  __int32 v146; // [esp+180h] [ebp-278h] BYREF
  __int64 *v147; // [esp+184h] [ebp-274h] BYREF
  __int32 v148; // [esp+188h] [ebp-270h] BYREF
  __int32 v149; // [esp+18Ch] [ebp-26Ch] BYREF
  __int64 *v150; // [esp+190h] [ebp-268h] BYREF
  __int32 v151; // [esp+194h] [ebp-264h] BYREF
  __int32 v152; // [esp+198h] [ebp-260h] BYREF
  __int32 v153; // [esp+19Ch] [ebp-25Ch] BYREF
  __int32 v154; // [esp+1A0h] [ebp-258h] BYREF
  char *v155; // [esp+1A4h] [ebp-254h] BYREF
  char *v156; // [esp+1A8h] [ebp-250h] BYREF
  __int32 v157; // [esp+1ACh] [ebp-24Ch] BYREF
  char *v158; // [esp+1B0h] [ebp-248h] BYREF
  char *v159; // [esp+1B4h] [ebp-244h] BYREF
  char *v160; // [esp+1B8h] [ebp-240h] BYREF
  char *v161; // [esp+1BCh] [ebp-23Ch] BYREF
  char *v162; // [esp+1C0h] [ebp-238h] BYREF
  __int32 v163; // [esp+1C4h] [ebp-234h] BYREF
  char *v164; // [esp+1C8h] [ebp-230h] BYREF
  int *v165; // [esp+1CCh] [ebp-22Ch] BYREF
  char *v166; // [esp+1D0h] [ebp-228h] BYREF
  int *v167; // [esp+1D4h] [ebp-224h] BYREF
  char *v168; // [esp+1D8h] [ebp-220h] BYREF
  __int32 v169; // [esp+1DCh] [ebp-21Ch] BYREF
  char *v170; // [esp+1E0h] [ebp-218h] BYREF
  int *v171; // [esp+1E4h] [ebp-214h] BYREF
  char *v172; // [esp+1E8h] [ebp-210h] BYREF
  char *v173; // [esp+1ECh] [ebp-20Ch] BYREF
  char *v174; // [esp+1F0h] [ebp-208h] BYREF
  int *v175; // [esp+1F4h] [ebp-204h] BYREF
  char *v176; // [esp+1F8h] [ebp-200h] BYREF
  int *v177; // [esp+1FCh] [ebp-1FCh] BYREF
  char *v178; // [esp+200h] [ebp-1F8h] BYREF
  int *v179; // [esp+204h] [ebp-1F4h] BYREF
  char *v180; // [esp+208h] [ebp-1F0h] BYREF
  int *v181; // [esp+20Ch] [ebp-1ECh] BYREF
  char *v182; // [esp+210h] [ebp-1E8h] BYREF
  int *v183; // [esp+214h] [ebp-1E4h] BYREF
  char *v184; // [esp+218h] [ebp-1E0h] BYREF
  __int64 *v185; // [esp+21Ch] [ebp-1DCh] BYREF
  __int64 *v186; // [esp+220h] [ebp-1D8h] BYREF
  __int64 *v187; // [esp+224h] [ebp-1D4h] BYREF
  __int64 **v188; // [esp+228h] [ebp-1D0h] BYREF
  __int64 *v189; // [esp+22Ch] [ebp-1CCh] BYREF
  __int64 *v190; // [esp+230h] [ebp-1C8h] BYREF
  __int32 v191; // [esp+234h] [ebp-1C4h] BYREF
  __int64 *v192; // [esp+238h] [ebp-1C0h] BYREF
  int v193; // [esp+23Ch] [ebp-1BCh] BYREF
  __int32 v194; // [esp+240h] [ebp-1B8h] BYREF
  char *v195; // [esp+244h] [ebp-1B4h] BYREF
  char *v196; // [esp+248h] [ebp-1B0h] BYREF
  __int64 *v197; // [esp+24Ch] [ebp-1ACh] BYREF
  __int64 *v198; // [esp+250h] [ebp-1A8h] BYREF
  __int64 *v199; // [esp+254h] [ebp-1A4h] BYREF
  __int64 *v200; // [esp+258h] [ebp-1A0h] BYREF
  __int64 *v201; // [esp+25Ch] [ebp-19Ch] BYREF
  __int64 *v202; // [esp+260h] [ebp-198h] BYREF
  __int64 *v203; // [esp+264h] [ebp-194h] BYREF
  __int64 *v204; // [esp+268h] [ebp-190h] BYREF
  __int64 *v205; // [esp+26Ch] [ebp-18Ch] BYREF
  int v206; // [esp+270h] [ebp-188h] BYREF
  char v207[12]; // [esp+274h] [ebp-184h] BYREF
  int v208; // [esp+280h] [ebp-178h]
  int v209; // [esp+338h] [ebp-C0h]
  bool v210; // [esp+33Fh] [ebp-B9h]
  char *v211; // [esp+340h] [ebp-B8h]
  __int64 *v212; // [esp+344h] [ebp-B4h] BYREF
  double v213; // [esp+348h] [ebp-B0h]
  __int64 *v214; // [esp+354h] [ebp-A4h] BYREF
  double v215; // [esp+358h] [ebp-A0h]
  __int64 *v216; // [esp+364h] [ebp-94h] BYREF
  double v217; // [esp+368h] [ebp-90h]
  __int64 *v218; // [esp+374h] [ebp-84h] BYREF
  double v219; // [esp+378h] [ebp-80h]
  __int64 *v220; // [esp+384h] [ebp-74h] BYREF
  double v221; // [esp+388h] [ebp-70h]
  __int64 *v222; // [esp+394h] [ebp-64h] BYREF
  double v223; // [esp+398h] [ebp-60h]
  bool v224; // [esp+3A3h] [ebp-55h]
  char *v225; // [esp+3A4h] [ebp-54h]
  int v226; // [esp+3A8h] [ebp-50h]
  int v227; // [esp+3ACh] [ebp-4Ch]
  int v228; // [esp+3B0h] [ebp-48h]
  int v229; // [esp+3B4h] [ebp-44h]
  int v230; // [esp+3B8h] [ebp-40h]
  __int64 *v231[2]; // [esp+3CCh] [ebp-2Ch] BYREF
  int v232; // [esp+3D4h] [ebp-24h] BYREF
  __int64 *v233[3]; // [esp+3D8h] [ebp-20h] BYREF
  __int32 v234; // [esp+3E4h] [ebp-14h] BYREF
  int v235; // [esp+3E8h] [ebp-10h]
  int v236; // [esp+3F4h] [ebp-4h]
  int savedregs; // [esp+3F8h] [ebp+0h] BYREF
  v209 = a2;
  v236 = a1;
  unknown_libname_2387((int)v207, (int)&byte_408C5C);
  v51 = (int)&savedregs;
  v50 = __PAIR64__(&loc_559AA9, __readfsdword(0));
  __writefsdword(0, (unsigned int)&v50);
  __linkproc__ LStrClr(&dword_598878);
  dword_597E9C = 1;
  dword_598B2C = 0;
  dword_598B0C = 0;
  TFont::SetSize(*(int **)(*off_5931D8[0] + 136), 9);
  word_59B7B8 = Get8087CW();
  Set8087CW(4927);
  dword_598B00 = 0;
  dword_597E9C = 2;
  OleInitialize(0);
  dword_597E9C = 3;
  ParamStr(0, &v205);
  LowerCase((int)v205, &v206);
  __linkproc__ LStrAsg(&dword_597D08, v206);
  v48 = Pos((int)"\\lantopolog.exe", dword_597D08) - 1;
  ParamStr(0, &v204);
  __linkproc__ LStrCopy((int)v204, 1, (int)v48, (__int64 **)&dword_597D08);
  byte_59800B = 0;
  if ( FileExists("unins000.dat") )
  {
    sub_530AD0(28, &v203);
    __linkproc__ LStrAsg(&dword_598670, (__int32)v203);
  }
  else
  {
    __linkproc__ LStrAsg(&dword_598670, dword_597D08);
    byte_59800B = 1;
  }
  __linkproc__ LStrClr(&dword_5985EC);
  if ( byte_59800B == 1 )
  {
    v229 = dword_598670;
    v228 = dword_598670;
    if ( dword_598670 )
      v228 = *(_DWORD *)(v228 - 4);
    if ( v228 >= 1 )
    {
      v235 = v228;
      while ( 1 )
      {
        __linkproc__ LStrCopy(dword_598670, v235, 1, &v202);
        __linkproc__ LStrCmp((int)v202, dword_559AF4);
        if ( v5 )
          break;
        if ( !--v235 )
          goto LABEL_24;
      }
      __linkproc__ LStrCopy(dword_598670, v235 + 1, 0x7FFFFFFF, v233);
      LowerCase((int)v233[0], &v232);
      __linkproc__ LStrCopy(v232, 1, 11, &v201);
      __linkproc__ LStrCmp((int)v201, (int *)"lantopolog2");
      if ( v5 )
      {
        __linkproc__ LStrCopy((int)v233[0], 14, 0x7FFFFFFF, v233);
        if ( v233[0] )
        {
          __linkproc__ LStrCopy((int)v233[0], 1, 1, &v200);
          __linkproc__ LStrCmp((int)v200, dword_559B14);
          if ( v5
            || (__linkproc__ LStrCopy((int)v233[0], 1, 1, &v199), __linkproc__ LStrCmp((int)v199, dword_559B20), v5)
            || (__linkproc__ LStrCopy((int)v233[0], 1, 1, &v198), __linkproc__ LStrCmp((int)v198, dword_559B2C), v5)
            || (__linkproc__ LStrCopy((int)v233[0], 1, 1, &v197), __linkproc__ LStrCmp((int)v197, dword_559B38), v5) )
          {
            __linkproc__ LStrCopy((int)v233[0], 2, 0x7FFFFFFF, (__int64 **)&dword_5985EC);
          }
        }
      }
      else
      {
        __linkproc__ LStrAsg(&dword_5985EC, (__int32)v233[0]);
      }
      v227 = dword_5985EC;
      v226 = dword_5985EC;
      if ( dword_5985EC )
        v226 = *(_DWORD *)(v226 - 4);
      if ( v226 <= 2 )
        __linkproc__ LStrClr(&dword_5985EC);
      else
        __linkproc__ LStrCat3(&dword_5985EC, (__int64 *)"      - ", (__int64 *)dword_5985EC);
    }
  }
LABEL_24:
  __linkproc__ LStrCat3(&dword_598674, (__int64 *)dword_598670, (__int64 *)"\\LanTopoLog2");
  if ( DirectoryExists((char *)dword_598674) || (unsigned __int8)ForceDirectories((int *)dword_598674, a3) == 1 )
    __linkproc__ LStrAsg(&dword_598678, dword_598674);
  else
    TApplication::Terminate(a3);
  __linkproc__ LStrCat3(&dword_5986AC, (__int64 *)dword_598674, (__int64 *)dword_559AF4);
  __linkproc__ LStrCat3(&dword_5986B0, (__int64 *)dword_598674, (__int64 *)"\\Lic_key\\");
  __linkproc__ LStrCat3((volatile __int32 *)&v196, (__int64 *)dword_598678, (__int64 *)"\\misc\\flag.txt");
  if ( FileExists(v196) )
  {
    v49 = (__int64 **)&savedregs;
    v48 = (const char *)&loc_5549C5;
    v47 = __readfsdword(0);
    __writefsdword(0, (unsigned int)&v47);
    __linkproc__ LStrCat3((volatile __int32 *)&v195, (__int64 *)dword_598678, (__int64 *)"\\misc\\flag.txt");
    v225 = v195;
    v6 = __linkproc__ LStrToPChar(v195);
    v224 = DeleteFileA(v6);
    __writefsdword(0, v47);
  }
  __linkproc__ LStrCat3(&dword_597D14, (__int64 *)dword_598678, (__int64 *)"\\Misc\\lantop.ini");
  __linkproc__ LStrCat3(&dword_598760, (__int64 *)dword_598678, (__int64 *)"\\Export\\Tmp\\");
  v49 = (__int64 **)&dword_598694;
  TApplication::GetTitle(*off_592C9C[0], &v194);
  __linkproc__ LStrCopy(v194, 14, 0x7FFFFFFF, v49);
  __linkproc__ LStrAsg(&dword_598698, (__int32)dword_559BD0);
  __linkproc__ LStrAsg(&dword_598660, (__int32)"qazwsxedcrfvtgbyhnujmikolp");
  dword_59B784 = (int)TBitmap::`...'(cls_Graphics_TBitmap, 1);
  (*(void (__fastcall **)(int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_59B784 + 64))(
    dword_59B784,
    169,
    *(_DWORD *)dword_59B784,
    HIDWORD(v50),
    v50);
  LOBYTE(v7) = 1;
  (*(void (__fastcall **)(int, int))(*(_DWORD *)dword_59B784 + 60))(dword_59B784, v7);
  TBitmap::SetTransparentColor(dword_59B784, *(_DWORD *)off_5931A4);
  dword_59B788 = (int)TBitmap::`...'(cls_Graphics_TBitmap, 1);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)dword_59B788 + 64))(dword_59B788, 169);
  LOBYTE(v8) = 1;
  (*(void (__fastcall **)(int, int))(*(_DWORD *)dword_59B788 + 60))(dword_59B788, v8);
  TBitmap::SetTransparentColor(dword_59B788, *(_DWORD *)off_5931A4);
  dword_59B780 = (int)TBitmap::`...'(cls_Graphics_TBitmap, 1);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)dword_59B780 + 52))(dword_59B780, 25);
  LOBYTE(v9) = 1;
  (*(void (__fastcall **)(int, int))(*(_DWORD *)dword_59B780 + 60))(dword_59B780, v9);
  TBitmap::SetTransparentColor(dword_59B780, *(_DWORD *)off_5931A4);
  dword_59B78C = (int)TBitmap::`...'(cls_Graphics_TBitmap, 1);
  dword_59B790 = (int)TBitmap::`...'(cls_Graphics_TBitmap, 1);
  dword_59B794 = (int)TBitmap::`...'(cls_Graphics_TBitmap, 1);
  dword_59B798 = (int)TBitmap::`...'(cls_Graphics_TBitmap, 1);
  dword_59B79C = (int)TBitmap::`...'(cls_Graphics_TBitmap, 1);
  dword_59B7A0 = (int)TBitmap::`...'(cls_Graphics_TBitmap, 1);
  dword_59B7B4 = TIdComponent::`...'(off_494C14, 1);
  dword_597F50 = 0;
  byte_59800A = 0;
  byte_598008 = 0;
  dword_598ADC = 0;
  dword_598B3C = 0;
  dword_597E9C = 4;
  GetLocaleFormatSettings(0x400u, (int)v207);
  LowerCase(v208, &v193);
  __linkproc__ LStrAsg(&dword_5982F8, v193);
  StringReplace((char *)dword_5982F8, (char *)dword_559B2C, 0, a3, (int)a4, (int)a5, &v192, 3);
  __linkproc__ LStrAsg(&dword_5982F8, (__int32)v192);
  v223 = Now();
  DateTimeToString(&v222, (__int64 *)"hh:mm", SLODWORD(v223), SHIDWORD(v223));
  __linkproc__ LStrAsg(&dword_598330, (__int32)v222);
  v221 = Now();
  DateTimeToString(&v220, (__int64 *)"dd\"/\"mm\"/\"yy", SLODWORD(v221), SHIDWORD(v221));
  __linkproc__ LStrAsg(&dword_5983D4, (__int32)v220);
  __linkproc__ LStrCopy(dword_5983D4, 2, 1, &dword_5983E0);
  v219 = Now();
  DateTimeToString(&v218, (__int64 *)"dd\"/\"mm", SLODWORD(v219), SHIDWORD(v219));
  __linkproc__ LStrAsg(&dword_598364, (__int32)v218);
  __linkproc__ LStrCopy(dword_598364, 4, 2, &v190);
  sub_5336E8((int)v190, &v191);
  __linkproc__ LStrAsg(&dword_597C4C, v191);
  dword_597E6C = (int)Pos((int)dword_559C3C, dword_5982F8);
  dword_597E70 = (int)Pos((int)dword_559C48, dword_5982F8);
  byte_598014 = dword_597E6C > dword_597E70;
  if ( dword_597E6C <= dword_597E70 )
  {
    __linkproc__ LStrCopy(dword_598364, 1, 2, (__int64 **)&v188);
    v51 = (int)v188;
    v50 = __PAIR64__(dword_559B2C, dword_597C4C);
  }
  else
  {
    v51 = dword_597C4C;
    HIDWORD(v50) = dword_559B2C;
    __linkproc__ LStrCopy(dword_598364, 1, 2, &v189);
    LODWORD(v50) = v189;
  }
  v49 = (__int64 **)dword_559B2C;
  v48 = (const char *)dword_598330;
  __linkproc__ LStrCatN((__int64 **)&dword_5987D0, 5);
  v217 = Now();
  DateTimeToString(&v216, (__int64 *)"yymmdd", SLODWORD(v217), SHIDWORD(v217));
  __linkproc__ LStrCat3(&dword_5983A4, v216, (__int64 *)dword_598330);
  sub_533828(&v187);
  __linkproc__ LStrAsg(&dword_5983A8, (__int32)v187);
  v215 = Now();
  DateTimeToString(&v214, (__int64 *)"yyyymm", SLODWORD(v215), SHIDWORD(v215));
  __linkproc__ LStrAsg(&dword_5983A0, (__int32)v214);
  v213 = Yesterday();
  DateTimeToString(&v212, (__int64 *)"dd\"/\"mm", SLODWORD(v213), SHIDWORD(v213));
  __linkproc__ LStrAsg(&dword_5983FC, (__int32)v212);
  __linkproc__ LStrAsg(
    &dword_597C4C,
    (__int32)"                                                                                                           "
             "                                                                                             ");
  v51 = dword_597C4C;
  HIDWORD(v50) = dword_597C4C;
  LODWORD(v50) = dword_597C4C;
  v49 = (__int64 **)dword_597C4C;
  v48 = (const char *)dword_597C4C;
  __linkproc__ LStrCatN((__int64 **)&dword_597C50, 5);
  v51 = dword_597C50;
  HIDWORD(v50) = dword_597C50;
  LODWORD(v50) = dword_597C50;
  v49 = (__int64 **)dword_597C50;
  v48 = (const char *)dword_597C50;
  __linkproc__ LStrCatN((__int64 **)&dword_597C54, 5);
  __linkproc__ LStrCat3(&dword_5984B8, (__int64 *)dword_597C54, (__int64 *)dword_597C54);
  dword_5981B0 = 2450;
  dword_5981B4 = 2840;
  dword_5981BC = 3000;
  dword_5981C0 = 4250;
  dword_5981E4 = 60;
  __linkproc__ LStrAsg(&dword_5986BC, (__int32)"windows-1252");
  dword_597E9C = 5;
  dword_597E6C = (unsigned __int16)GetSystemDefaultLangID();
  if ( dword_597E6C == 1049 || (unsigned int)(dword_597E6C - 1058) < 2 || dword_597E6C == 2073 )
    __linkproc__ LStrAsg(&dword_5986BC, (__int32)"windows-1251");
  v51 = (int)"<!DOCTYPE html><html><HEAD><TITLE>LanTopoLog</TITLE><meta http-equiv=\"Content-Type\" content=\"text/html; charset=";
  HIDWORD(v50) = dword_5986BC;
  LODWORD(v50) = dword_559DF4;
  __linkproc__ LStrCatN((__int64 **)&dword_5986CC, 3);
  __linkproc__ LStrCat3(
    &dword_5986D0,
    (__int64 *)dword_5986CC,
    (__int64 *)"<meta http-equiv=\"Cache-Control\" content=\"no-store,no-cache,must-revalidate\"><meta http-equiv=\"Expir"
               "es\" content=\"0\"><meta http-equiv=\"refresh\" content=\"60\">");
  TWinControl::ScaleBy((int *)dword_597AD4, 100);
  dword_597E9C = 6;
  byte_598006 = 0;
  __linkproc__ LStrLAsg(&v234, (__int32)dword_559EA8);
  dword_597B4C = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597B50 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597B54 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597BF8 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597BFC = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597AD8 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597ADC = (int)TObject::`...'(cls_Classes_TStringList, 1);
  TStrings::SetDelimiter(dword_597ADC, 44);
  dword_597AE0 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597AE4 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597AE8 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597AEC = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598A64 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  TStrings::SetDelimiter(dword_598A64, 46);
  dword_597D20 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  TStrings::SetNameValueSeparator(dword_597D20, 44);
  dword_597D24 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597D28 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  TStrings::SetNameValueSeparator(dword_597D28, 44);
  TStrings::SetNameValueSeparator(dword_597D24, 44);
  dword_597C00 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597D2C = (int)TObject::`...'(cls_Classes_TStringList, 1);
  TStrings::SetNameValueSeparator(dword_597D2C, 44);
  TStringList::SetSorted((_BYTE *)dword_597D2C, 1);
  dword_597AF0 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597B1C = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597B00 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597AF4 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597AF8 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597D30 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  TStrings::SetNameValueSeparator(dword_597D30, 44);
  TStringList::SetSorted((_BYTE *)dword_597D30, 1);
  dword_597B9C = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597BA0 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597B04 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597B08 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597D44 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  TStrings::SetNameValueSeparator(dword_597D44, 44);
  TStringList::SetSorted((_BYTE *)dword_597D44, 1);
  dword_597DD8 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  TStrings::SetNameValueSeparator(dword_597DD8, 44);
  dword_597B28 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597B2C = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597BB8 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597DA4 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597D34 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  TStrings::SetNameValueSeparator(dword_597D34, 44);
  TStringList::SetSorted((_BYTE *)dword_597D34, 1);
  dword_597D40 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  TStringList::SetSorted((_BYTE *)dword_597D40, 1);
  dword_597D3C = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597B20 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597B24 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597D38 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597D68 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597D70 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597C44 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597C48 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597D48 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  TStringList::SetSorted((_BYTE *)dword_597D48, 1);
  dword_597D54 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  TStringList::SetSorted((_BYTE *)dword_597D54, 1);
  dword_597D58 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  TStringList::SetSorted((_BYTE *)dword_597D58, 1);
  dword_597D74 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  TStringList::SetSorted((_BYTE *)dword_597D74, 1);
  TStrings::SetNameValueSeparator(dword_597D74, 44);
  dword_597B44 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597B48 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597B3C = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597B40 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597D6C = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597D5C = (int)TObject::`...'(cls_Classes_TStringList, 1);
  TStringList::SetSorted((_BYTE *)dword_597D5C, 1);
  dword_5988C4 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_5988C8 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_5988DC = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597D60 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  TStringList::SetSorted((_BYTE *)dword_597D60, 1);
  dword_597D64 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  TStringList::SetSorted((_BYTE *)dword_597D64, 1);
  dword_597D4C = (int)TObject::`...'(cls_Classes_TStringList, 1);
  TStringList::SetSorted((_BYTE *)dword_597D4C, 1);
  dword_597D50 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  TStringList::SetSorted((_BYTE *)dword_597D50, 1);
  dword_597E38 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  TStringList::SetSorted((_BYTE *)dword_597E38, 1);
  dword_597E3C = (int)TObject::`...'(cls_Classes_TStringList, 1);
  TStringList::SetSorted((_BYTE *)dword_597E3C, 1);
  dword_597DE4 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597DF4 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_5988CC = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597D78 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_5988D8 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_5988E0 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597D7C = (int)TObject::`...'(cls_Classes_TStringList, 1);
  TStringList::SetSorted((_BYTE *)dword_597D7C, 1);
  dword_597D80 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  TStringList::SetSorted((_BYTE *)dword_597D80, 1);
  dword_597D9C = (int)TObject::`...'(cls_Classes_TStringList, 1);
  TStringList::SetSorted((_BYTE *)dword_597D9C, 1);
  dword_597D90 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597E20 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_5988EC = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_5988E4 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597D94 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597D98 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_5988F0 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_5988D0 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_5988D4 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_5988E8 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598944 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598934 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_5988FC = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598900 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_5988F4 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_5988F8 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598904 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598908 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_59890C = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597DA0 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  TStringList::SetSorted((_BYTE *)dword_597DA0, 1);
  TStrings::SetNameValueSeparator(dword_597DA0, 44);
  dword_597DE8 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  TStringList::SetSorted((_BYTE *)dword_597DE8, 1);
  dword_597E10 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  TStringList::SetSorted((_BYTE *)dword_597E10, 1);
  dword_597DA4 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598914 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598918 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597DC0 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597DAC = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597DB0 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597DB4 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597DA8 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598910 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597DB8 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597DBC = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_59891C = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598930 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598920 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598924 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598928 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_59894C = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598938 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_59893C = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598940 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_59892C = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598948 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597E0C = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597DC8 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598950 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597E00 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598954 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597DD0 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597DCC = (int)TObject::`...'(cls_Classes_TStringList, 1);
  TStringList::SetSorted((_BYTE *)dword_597DCC, 1);
  dword_598958 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_59895C = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598960 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598964 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598968 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_59896C = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598970 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598974 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598978 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_59897C = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598980 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598984 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598988 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_59898C = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598990 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598994 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598998 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_59899C = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_5989A0 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_5989A4 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_5989A8 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_5989AC = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_5989B0 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_5989B4 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_5989B8 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_5989BC = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_5989C0 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_5989CC = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_5989D0 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_5989D4 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_5989D8 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_5989DC = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_5989E0 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_5989E4 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_5989E8 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_5989C8 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_5989C4 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598A34 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598A38 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597DD4 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  TStringList::SetSorted((_BYTE *)dword_597DD4, 1);
  dword_598A3C = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598A4C = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598A40 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598A50 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598A44 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598A54 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598A48 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598A58 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_5989EC = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_5989F0 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_5989F4 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_5989F8 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_5989FC = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598A00 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598A04 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598A08 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598A0C = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598A10 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598A14 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598A18 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598A1C = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598A20 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598A24 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598A28 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598A2C = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597DF0 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597C34 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597C38 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597C40 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597C3C = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597DF8 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  TStringList::SetSorted((_BYTE *)dword_597DF8, 1);
  dword_597DFC = (int)TObject::`...'(cls_Classes_TStringList, 1);
  TStringList::SetSorted((_BYTE *)dword_597DFC, 1);
  dword_59B7BC = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_59B7C0 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597E08 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597E04 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597B60 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598A30 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597B64 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597B74 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598A68 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597B88 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597B8C = (int)TObject::`...'(cls_Classes_TStringList, 1);
  (*(void (__fastcall **)(int))(*(_DWORD *)dword_597B8C + 68))(dword_597B8C);
  dword_598A6C = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597B90 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597E14 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  TStringList::SetSorted((_BYTE *)dword_597E14, 1);
  dword_598A80 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598A84 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598A88 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598A8C = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598A90 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598A9C = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598AA0 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597E2C = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597BAC = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597DDC = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597DC4 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597DE0 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597E1C = (int)TObject::`...'(cls_Classes_TStringList, 1);
  TStringList::SetSorted((_BYTE *)dword_597E1C, 1);
  dword_597C30 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597E30 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  TStringList::SetSorted((_BYTE *)dword_597E30, 1);
  dword_597E34 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  TStringList::SetSorted((_BYTE *)dword_597E34, 1);
  dword_597BA4 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597E18 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597BA8 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597BBC = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597BC0 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597BB0 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597BB4 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597BC4 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597B94 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597B98 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597BC8 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597B0C = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597E24 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  TStringList::SetSorted((_BYTE *)dword_597E24, 1);
  dword_597BCC = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597BD4 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597BD8 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597BE4 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597BE8 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  (*(void (__fastcall **)(int))(*(_DWORD *)dword_597BE8 + 68))(dword_597BE8);
  dword_597BEC = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597BF0 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597C04 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597C08 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597C20 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597C24 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598AA8 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598AAC = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598AB0 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598AB4 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597B84 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597B68 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597B7C = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597B80 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597B30 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597B34 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597B38 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597D84 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  TStringList::SetSorted((_BYTE *)dword_597D84, 1);
  dword_597D88 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  TStringList::SetSorted((_BYTE *)dword_597D88, 1);
  dword_597D8C = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597D8C = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597AFC = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597BD0 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597C18 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597E28 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  TStringList::SetSorted((_BYTE *)dword_597E28, 1);
  dword_597BF4 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597BE0 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_59B7E4 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_59B7E8 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_59B7EC = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_59B7F0 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_59B7F4 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_59B7F8 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597C0C = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597C10 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597C14 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598A70 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598A74 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598A78 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598A7C = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598AB8 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598ABC = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597C28 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598AA4 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597C2C = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597BDC = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597B10 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597B14 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597B18 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598A5C = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598A60 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597DEC = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597C1C = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597B5C = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597B70 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597B58 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597B6C = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597B78 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598A80 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598A94 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_598A98 = (int)TObject::`...'(cls_Classes_TStringList, 1);
  dword_597E9C = 7;
  __linkproc__ LStrCopy(
    (int)"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz+/",
    30,
    16,
    (__int64 **)&dword_59864C);
  __linkproc__ LStrCopy((int)"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz+/", 28, 16, &dword_59866C);
  GetEnvironmentVariable("computername", &v186);
  __linkproc__ LStrAsg(&dword_598388, (__int32)v186);
  dword_597E9C = 8;
  GetEnvironmentVariable("TEMP", &v185);
  __linkproc__ LStrAsg(&dword_597CFC, (__int32)v185);
  if ( !DirectoryExists((char *)dword_598678) )
    ForceDirectories((int *)dword_598678, a3);
  __linkproc__ LStrCat3((volatile __int32 *)&v184, (__int64 *)dword_598678, (__int64 *)"\\Data");
  if ( !DirectoryExists(v184) )
  {
    __linkproc__ LStrCat3((volatile __int32 *)&v183, (__int64 *)dword_598678, (__int64 *)"\\Data");
    ForceDirectories(v183, a3);
  }
  __linkproc__ LStrCat3((volatile __int32 *)&v182, (__int64 *)dword_598678, (__int64 *)"\\Misc");
  if ( !DirectoryExists(v182) )
  {
    __linkproc__ LStrCat3((volatile __int32 *)&v181, (__int64 *)dword_598678, (__int64 *)"\\Misc");
    ForceDirectories(v181, a3);
  }
  __linkproc__ LStrCat3((volatile __int32 *)&v180, (__int64 *)dword_598678, (__int64 *)"\\Misc");
  if ( !DirectoryExists(v180) )
  {
    __linkproc__ LStrCat3((volatile __int32 *)&v179, (__int64 *)dword_598678, (__int64 *)"\\Misc");
    ForceDirectories(v179, a3);
  }
  __linkproc__ LStrCat3((volatile __int32 *)&v178, (__int64 *)dword_598678, (__int64 *)"\\Htm");
  if ( !DirectoryExists(v178) )
  {
    __linkproc__ LStrCat3((volatile __int32 *)&v177, (__int64 *)dword_598678, (__int64 *)"\\Htm");
    ForceDirectories(v177, a3);
  }
  __linkproc__ LStrCat3((volatile __int32 *)&v176, (__int64 *)dword_598678, (__int64 *)"\\Lic_key");
  if ( !DirectoryExists(v176) )
  {
    __linkproc__ LStrCat3((volatile __int32 *)&v175, (__int64 *)dword_598678, (__int64 *)"\\Lic_key");
    ForceDirectories(v175, a3);
  }
  __linkproc__ LStrCat3((volatile __int32 *)&v174, (__int64 *)dword_598678, (__int64 *)"\\Htm");
  if ( DirectoryExists(v174) )
  {
    __linkproc__ LStrCat3((volatile __int32 *)&v173, (__int64 *)dword_598678, (__int64 *)"\\Htm\\cv.gif");
    if ( !FileExists(v173) )
    {
      v51 = (int)"/c xcopy \"";
      HIDWORD(v50) = dword_597D08;
      LODWORD(v50) = "\\htm\\*.gif\" \"";
      v49 = (__int64 **)dword_598678;
      v48 = "\\Htm\" /y";
      __linkproc__ LStrCatN(v231, 5);
      v51 = 0;
      HIDWORD(v50) = 0;
      v10 = __linkproc__ LStrToPChar((char *)v231[0]);
      ShellExecuteA(0, 0, "cmd.exe", v10, (LPCSTR)HIDWORD(v50), v51);
    }
  }
  __linkproc__ LStrCat3((volatile __int32 *)&v172, (__int64 *)dword_598678, (__int64 *)"\\Import");
  if ( !DirectoryExists(v172) )
  {
    __linkproc__ LStrCat3((volatile __int32 *)&v171, (__int64 *)dword_598678, (__int64 *)"\\Import");
    ForceDirectories(v171, a3);
  }
  __linkproc__ LStrCat3((volatile __int32 *)&v170, (__int64 *)dword_598678, (__int64 *)"\\Import\\rename_add_php.txt");
  if ( !FileExists(v170) )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)dword_597AD8 + 68))(dword_597AD8);
    (*(void (__fastcall **)(int, const char *))(*(_DWORD *)dword_597AD8 + 56))(
      dword_597AD8,
      "; A line with a \";\" in the first position is ignored.");
    (*(void (__fastcall **)(int, const char *))(*(_DWORD *)dword_597AD8 + 56))(
      dword_597AD8,
      "; You can add any code to LanTopoLog php webpages.");
    (*(void (__fastcall **)(int, const char *))(*(_DWORD *)dword_597AD8 + 56))(
      dword_597AD8,
      "; Place your php code after command #Add... and  #Insert...");
    (*(void (__fastcall **)(int, const char *))(*(_DWORD *)dword_597AD8 + 56))(
      dword_597AD8,
      "; To enable your code rename this file to add_php.txt");
    (*(void (__fastcall **)(int, const char *))(*(_DWORD *)dword_597AD8 + 56))(
      dword_597AD8,
      "; To disable your code delete or rename the file add_php.txt");
    (*(void (__fastcall **)(int, const char *))(*(_DWORD *)dword_597AD8 + 56))(dword_597AD8, "#Add to the beginning:");
    (*(void (__fastcall **)(int, const char *))(*(_DWORD *)dword_597AD8 + 56))(
      dword_597AD8,
      "<?php include 'login.php'; ?>");
    (*(void (__fastcall **)(int, const char *))(*(_DWORD *)dword_597AD8 + 56))(
      dword_597AD8,
      "#Insert before: </HEAD><body><pre>");
    (*(void (__fastcall **)(int, const char *))(*(_DWORD *)dword_597AD8 + 56))(dword_597AD8, "<?php ... ?>");
    (*(void (__fastcall **)(int, const char *))(*(_DWORD *)dword_597AD8 + 56))(
      dword_597AD8,
      "#Insert after: </HEAD><body><pre>");
    (*(void (__fastcall **)(int, const char *))(*(_DWORD *)dword_597AD8 + 56))(dword_597AD8, "<?php ... ?>");
    (*(void (__fastcall **)(int, const char *))(*(_DWORD *)dword_597AD8 + 56))(dword_597AD8, "#Add to the end:");
    (*(void (__fastcall **)(int, const char *))(*(_DWORD *)dword_597AD8 + 56))(dword_597AD8, "<?php ... ?>");
    v51 = (int)&savedregs;
    v50 = __PAIR64__(&loc_556A42, __readfsdword(0));
    __writefsdword(0, (unsigned int)&v50);
    __linkproc__ LStrCat3(&v169, (__int64 *)dword_598678, (__int64 *)"\\Import\\rename_add_php.txt");
    (*(void (__fastcall **)(int, __int32))(*(_DWORD *)dword_597AD8 + 116))(dword_597AD8, v169);
    __writefsdword(0, v50);
  }
  __linkproc__ LStrCat3((volatile __int32 *)&v168, (__int64 *)dword_598678, (__int64 *)"\\Export");
  if ( !DirectoryExists(v168) )
  {
    __linkproc__ LStrCat3((volatile __int32 *)&v167, (__int64 *)dword_598678, (__int64 *)"\\Export");
    ForceDirectories(v167, a3);
  }
  __linkproc__ LStrCat3((volatile __int32 *)&v166, (__int64 *)dword_598678, (__int64 *)"\\Export\\Tmp");
  if ( !DirectoryExists(v166) )
  {
    __linkproc__ LStrCat3((volatile __int32 *)&v165, (__int64 *)dword_598678, (__int64 *)"\\Export\\Tmp");
    ForceDirectories(v165, a3);
  }
  __linkproc__ LStrCat3((volatile __int32 *)&v164, (__int64 *)dword_598678, (__int64 *)"\\Data\\iprange.txt");
  if ( !FileExists(v164) )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)dword_597B9C + 68))(dword_597B9C);
    (*(void (__fastcall **)(int, const char *))(*(_DWORD *)dword_597B9C + 56))(
      dword_597B9C,
      "192.168.0.*,nicfeUhcThVZX");
    v51 = (int)&savedregs;
    v50 = __PAIR64__(&loc_556B54, __readfsdword(0));
    __writefsdword(0, (unsigned int)&v50);
    __linkproc__ LStrCat3(&v163, (__int64 *)dword_598678, (__int64 *)"\\Data\\iprange.txt");
    (*(void (__fastcall **)(int, __int32))(*(_DWORD *)dword_597B9C + 116))(dword_597B9C, v163);
    __writefsdword(0, v50);
  }
  __linkproc__ LStrCat3((volatile __int32 *)&v162, (__int64 *)dword_598678, (__int64 *)"\\lantopolog.lic");
  if ( !FileExists(v162) )
  {
    __linkproc__ LStrCat3((volatile __int32 *)&v161, (__int64 *)dword_598678, (__int64 *)"\\Lic_key\\lantopolog.lic");
    if ( !FileExists(v161) )
    {
      __linkproc__ LStrCat3((volatile __int32 *)&v160, (__int64 *)dword_597D08, (__int64 *)"\\lantopolog.lic");
      if ( FileExists(v160) )
      {
        v51 = (int)"/c copy \"";
        HIDWORD(v50) = dword_597D08;
        LODWORD(v50) = "\\lantopolog.lic\" \"";
        v49 = (__int64 **)dword_598678;
        v48 = "\\Lic_key\\lantopolog.lic\" /y";
        __linkproc__ LStrCatN(v231, 5);
        v51 = 0;
        HIDWORD(v50) = 0;
        v11 = __linkproc__ LStrToPChar((char *)v231[0]);
        ShellExecuteA(0, 0, "cmd.exe", v11, (LPCSTR)HIDWORD(v50), v51);
      }
    }
  }
  __linkproc__ LStrCat3((volatile __int32 *)&v159, (__int64 *)dword_598678, (__int64 *)"\\Data\\iprange.txt");
  if ( FileExists(v159) )
    sub_5302D8();
  sub_4FA260();
  __linkproc__ LStrCat3((volatile __int32 *)&v158, (__int64 *)dword_598678, (__int64 *)"\\Data\\swicons.txt");
  if ( FileExists(v158) )
  {
    v51 = (int)&savedregs;
    v50 = __PAIR64__(&loc_556CA6, __readfsdword(0));
    __writefsdword(0, (unsigned int)&v50);
    __linkproc__ LStrCat3(&v157, (__int64 *)dword_598678, (__int64 *)"\\data\\swicons.txt");
    (*(void (__fastcall **)(int, __int32))(*(_DWORD *)dword_597E38 + 104))(dword_597E38, v157);
    __writefsdword(0, v50);
  }
  __linkproc__ LStrCat3((volatile __int32 *)&v156, (__int64 *)dword_598678, (__int64 *)"\\Data\\wsicons.txt");
  if ( !FileExists(v156) )
  {
    v51 = (int)"/c copy \"";
    HIDWORD(v50) = dword_597D08;
    LODWORD(v50) = "\\Import\\wsicons.txt\" \"";
    v49 = (__int64 **)dword_598678;
    v48 = "\\Data\\wsicons.txt\" /y";
    __linkproc__ LStrCatN(v231, 5);
    v51 = 0;
    HIDWORD(v50) = 0;
    v12 = __linkproc__ LStrToPChar((char *)v231[0]);
    ShellExecuteA(0, 0, "cmd.exe", v12, (LPCSTR)HIDWORD(v50), v51);
  }
  __linkproc__ LStrCat3((volatile __int32 *)&v155, (__int64 *)dword_598678, (__int64 *)"\\Data\\wsicons.txt");
  if ( FileExists(v155) )
  {
    v51 = (int)&savedregs;
    v50 = __PAIR64__(&loc_556D7B, __readfsdword(0));
    __writefsdword(0, (unsigned int)&v50);
    __linkproc__ LStrCat3(&v154, (__int64 *)dword_598678, (__int64 *)"\\data\\wsicons.txt");
    (*(void (__fastcall **)(int, __int32))(*(_DWORD *)dword_597E3C + 104))(dword_597E3C, v154);
    __writefsdword(0, v50);
  }
  dword_5980AC = 100;
  dword_598190 = 0;
  dword_598194 = 0;
  dword_597E9C = 9;
  dword_598054 = (int)unknown_libname_3239((int)&off_427A9C, 1, dword_597D14);
  v51 = 10;
  v13 = (*(int (__fastcall **)(int, const char *, const char *, int))(*(_DWORD *)dword_598054 + 8))(
          dword_598054,
          "Position",
          "left",
          10);
  TCustomForm::SetLeft(dword_597AD4, v13);
  v51 = 10;
  v14 = (*(int (__fastcall **)(int, const char *, int *, int))(*(_DWORD *)dword_598054 + 8))(
          dword_598054,
          "Position",
          dword_55A3DC,
          10);
  TCustomForm::SetTop(dword_597AD4, v14);
  dword_597E70 = 900;
  if ( TScreen::GetHeight() - 50 < 900 )
    dword_597E70 = TScreen::GetHeight() - 100;
  dword_5981C4 = 1500;
  if ( TScreen::GetWidth() < 1500 )
    dword_5981C4 = TScreen::GetWidth() - 100;
  v51 = dword_5981C4;
  v15 = (*(int (__fastcall **)(int, const char *, const char *, int))(*(_DWORD *)dword_598054 + 8))(
          dword_598054,
          "Position",
          "width",
          dword_5981C4);
  TControl::SetWidth(dword_597AD4, v15);
  v51 = dword_597E70;
  v16 = (*(int (__fastcall **)(int, const char *, const char *, int))(*(_DWORD *)dword_598054 + 8))(
          dword_598054,
          "Position",
          "height",
          dword_597E70);
  TControl::SetHeight(dword_597AD4, v16);
  v51 = 0;
  dword_5981A8 = (*(int (__fastcall **)(int, const char *, const char *, _DWORD))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "Position",
                   "ws_max",
                   0);
  if ( dword_5981A8 == 1 )
  {
    v51 = 3;
    Handle = (HWND)TWinControl::GetHandle(dword_597AD4);
    ShowWindow(Handle, v51);
  }
  v51 = 2;
  dword_5981DC = (*(int (__fastcall **)(int, const char *, const char *, int))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "Position",
                   "panels",
                   2);
  dword_597E6C = *(_DWORD *)(dword_597AD4 + 72) / 2;
  v51 = dword_597E6C;
  dword_5981E8 = (*(int (__fastcall **)(int, const char *, const char *, int))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "Position",
                   "top_width",
                   dword_597E6C);
  if ( *(_DWORD *)(dword_597AD4 + 72) - dword_5981E8 < 50 )
    dword_5981E8 = *(_DWORD *)(dword_597AD4 + 72) / 2;
  if ( dword_5981DC == 2 )
  {
    TControl::SetWidth(*(_DWORD *)(v236 + 968), dword_5981E8);
    TControl::SetVisible(*(_DWORD *)(v236 + 1380), 1u);
    TControl::SetVisible(*(_DWORD *)(v236 + 1376), 0);
  }
  else
  {
    TControl::SetWidth(*(_DWORD *)(v236 + 968), *(_DWORD *)(dword_597AD4 + 72));
    TControl::SetVisible(*(_DWORD *)(v236 + 1376), 1u);
    TControl::SetVisible(*(_DWORD *)(v236 + 1380), 0);
  }
  v51 = 0;
  dword_597EB4 = (*(int (__fastcall **)(int, const char *, const char *, _DWORD))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "General",
                   "Log_bottom",
                   0);
  v51 = (int)"00/00";
  HIDWORD(v50) = &v153;
  (**(void (__fastcall ***)(int, const char *, const char *, const char *, __int32 *))dword_598054)(
    dword_598054,
    "General",
    "RunDaily",
    "00/00",
    &v153);
  __linkproc__ LStrAsg(&dword_598768, v153);
  v51 = 90;
  dword_598128 = (*(int (__fastcall **)(int, const char *, const char *, int))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "General",
                   "DBclearDays",
                   90);
  v51 = 16447992;
  dword_59B7DC = (*(int (__fastcall **)(int, const char *, const char *, int))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "General",
                   "BGcolor",
                   16447992);
  v51 = 16620391;
  dword_59B7E0 = (*(int (__fastcall **)(int, const char *, const char *, int))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "General",
                   "Chartcolor",
                   16620391);
  sub_57E5F0(v236);
  v51 = 0;
  dword_597E58 = (*(int (__fastcall **)(int, const char *, const char *, _DWORD))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "General",
                   "SNMPlocationDisplay",
                   0);
  v51 = 0;
  dword_597E74 = (*(int (__fastcall **)(int, const char *, const char *, _DWORD))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "General",
                   "SNMPdescriptionDisplay",
                   0);
  v51 = 0;
  dword_597E8C = (*(int (__fastcall **)(int, const char *, const char *, _DWORD))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "General",
                   "Descr_show",
                   0);
  v51 = 0;
  dword_597EA8 = (*(int (__fastcall **)(int, const char *, const char *, _DWORD))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "General",
                   "Alias_show",
                   0);
  v51 = 1;
  dword_597E90 = (*(int (__fastcall **)(int, const char *, const char *, int))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "General",
                   "Vendor_show",
                   1);
  v51 = 1;
  dword_597E98 = (*(int (__fastcall **)(int, const char *, const char *, int))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "General",
                   "Display_vlan",
                   1);
  v51 = 0;
  dword_597FA0 = (*(int (__fastcall **)(int, const char *, const char *, _DWORD))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "General",
                   "cut_ifname",
                   0);
  v51 = 0;
  dword_597E54 = (*(int (__fastcall **)(int, const char *, const char *, _DWORD))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "General",
                   "Port_ifname",
                   0);
  v51 = (int)dword_55A574;
  HIDWORD(v50) = &v152;
  (**(void (__fastcall ***)(int, const char *, const char *, int *, __int32 *))dword_598054)(
    dword_598054,
    "General",
    "Font_size",
    dword_55A574,
    &v152);
  __linkproc__ LStrAsg(&dword_598860, v152);
  v51 = (int)dword_55A594;
  HIDWORD(v50) = &v151;
  (**(void (__fastcall ***)(int, const char *, const char *, int *, __int32 *))dword_598054)(
    dword_598054,
    "General",
    "language",
    dword_55A594,
    &v151);
  __linkproc__ LStrAsg(&dword_598874, v151);
  v51 = 3;
  dword_5980CC = (*(int (__fastcall **)(int, const char *, const char *, int))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "Monitor",
                   "PingInterval",
                   3);
  dword_5980D4 = 60 * dword_5980CC;
  v51 = 2;
  dword_598214 = (*(int (__fastcall **)(int, const char *, const char *, int))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "Monitor",
                   "AlertPingFailThresh",
                   2);
  if ( dword_598214 > 8 )
    dword_598214 = 8;
  if ( dword_598214 < 1 )
    dword_598214 = 1;
  IntToStr(dword_598214 + 1, &v150);
  __linkproc__ LStrAsg(&dword_598764, (__int32)v150);
  v51 = 1;
  dword_598218 = (*(int (__fastcall **)(int, const char *, const char *, int))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "Monitor",
                   "PingAlertNotify",
                   1);
  v51 = 1000;
  dword_598EE0 = (*(int (__fastcall **)(int, const char *, const char *, int))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "Monitor",
                   "ping_timeout",
                   1000);
  v51 = 10;
  dword_5980D8 = (*(int (__fastcall **)(int, const char *, const char *, int))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "Monitor",
                   "portmon_interval",
                   10);
  dword_5980DC = 60 * dword_5980D8;
  dword_5980E0 = 60 * dword_5980D8 - 30;
  if ( dword_5980E0 < 0 )
    dword_5980E0 = 0;
  v51 = 0;
  dword_59810C = (*(int (__fastcall **)(int, const char *, const char *, _DWORD))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "Monitor",
                   "PortMonitorNotify",
                   0);
  dword_5980D0 = 0;
  v51 = 0;
  dword_597E78 = (*(int (__fastcall **)(int, const char *, const char *, _DWORD))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "Discovery",
                   "NewMacNotify",
                   0);
  v51 = 0;
  dword_59813C = (*(int (__fastcall **)(int, const char *, const char *, _DWORD))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "Discovery",
                   "UseManConn",
                   0);
  v51 = (int)dword_55A6A0;
  HIDWORD(v50) = v233;
  (**(void (__fastcall ***)(int, const char *, const char *, int *, __int64 **))dword_598054)(
    dword_598054,
    "Discovery",
    "Discov_hours",
    dword_55A6A0,
    v233);
  dword_597E6C = (int)Pos((int)dword_559B38, (int)v233[0]);
  if ( !dword_597E6C && sub_529000((int)v233[0]) )
    dword_598168 = StrToInt((int)v233[0]);
  if ( dword_597E6C > 0 )
  {
    __linkproc__ LStrCopy((int)v233[0], dword_597E6C + 1, 1, v233);
    if ( sub_529000((int)v233[0]) )
      dword_59816C = StrToInt((int)v233[0]);
    else
      dword_59816C = 9;
    dword_598168 = 0;
  }
  dword_597E6C = 6 * dword_59816C + 60 * dword_598168;
  dword_5981FC = 6 * dword_59816C + 60 * dword_598168 - (6 * dword_59816C + 60 * dword_598168) / 5;
  if ( dword_5981FC < 1 )
    dword_5981FC = 1;
  v51 = 0;
  dword_5980A0 = (*(int (__fastcall **)(int, const char *, const char *, _DWORD))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "Discovery",
                   "Step",
                   0);
  if ( dword_5980A0 > 0 )
    dword_5980A0 = 1;
  v51 = 0;
  HIDWORD(v50) = &v149;
  (**(void (__fastcall ***)(int, const char *, const char *, _DWORD, __int32 *))dword_598054)(
    dword_598054,
    "Discovery",
    "RootIP",
    0,
    &v149);
  __linkproc__ LStrAsg(&dword_598410, v149);
  v51 = 0;
  HIDWORD(v50) = &v148;
  (**(void (__fastcall ***)(int, const char *, const char *, _DWORD, __int32 *))dword_598054)(
    dword_598054,
    "Discovery",
    "RouterIP",
    0,
    &v148);
  __linkproc__ LStrAsg(&dword_5984C4, v148);
  sub_52E370((__int64 *)"public", &v147);
  __linkproc__ LStrAsg(&dword_597C50, (__int32)v147);
  v51 = dword_597C50;
  HIDWORD(v50) = &v146;
  (**(void (__fastcall ***)(int, const char *, const char *, int, __int32 *))dword_598054)(
    dword_598054,
    "Discovery",
    "RouterComm",
    dword_597C50,
    &v146);
  __linkproc__ LStrAsg(&dword_597C4C, v146);
  sub_52E3E4(dword_597C4C, (__int32)&v145);
  __linkproc__ LStrAsg(&dword_5984E4, v145);
  v51 = 0;
  HIDWORD(v50) = &v144;
  (**(void (__fastcall ***)(int, const char *, const char *, _DWORD, __int32 *))dword_598054)(
    dword_598054,
    "Discovery",
    "Wmi_user",
    0,
    &v144);
  __linkproc__ LStrAsg(&dword_598808, v144);
  v51 = 0;
  HIDWORD(v50) = &v143;
  (**(void (__fastcall ***)(int, const char *, const char *, _DWORD, __int32 *))dword_598054)(
    dword_598054,
    "Discovery",
    "Wmi_passw",
    0,
    &v143);
  __linkproc__ LStrAsg(&dword_597C4C, v143);
  sub_52E3E4(dword_597C4C, (__int32)&v142);
  __linkproc__ LStrAsg(&dword_59880C, v142);
  v51 = 0;
  dword_59825C = (*(int (__fastcall **)(int, const char *, const char *, _DWORD))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "Discovery",
                   "EnableWMI",
                   0);
  v51 = 0;
  dword_597EB0 = (*(int (__fastcall **)(int, const char *, const char *, _DWORD))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "Discovery",
                   "Discov_ap",
                   0);
  if ( dword_597EB0 == 1 )
  {
    LOBYTE(v18) = 1;
    (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(v236 + 1128) + 220))(*(_DWORD *)(v236 + 1128), v18);
  }
  else
  {
    (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(v236 + 1128) + 220))(*(_DWORD *)(v236 + 1128), 0);
  }
  v51 = 8;
  dword_597EE0 = (*(int (__fastcall **)(int, const char *, const char *, int))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "Discovery",
                   "Thread_limit",
                   8);
  if ( dword_597EE0 < 1 || dword_597EE0 > 8 )
    dword_597EE0 = 8;
  v51 = 0;
  HIDWORD(v50) = &v141;
  (**(void (__fastcall ***)(int, const char *, const char *, _DWORD, __int32 *))dword_598054)(
    dword_598054,
    "Discovery",
    "sw_discovery",
    0,
    &v141);
  __linkproc__ LStrAsg(&dword_598378, v141);
  if ( Pos((int)dword_55A79C, dword_598378) == (_BYTE *)2 )
    __linkproc__ LStrCat3(&dword_598378, (__int64 *)dword_55A7A8, (__int64 *)dword_598378);
  v51 = 0;
  dword_5980EC = (*(int (__fastcall **)(int, int *, const char *, _DWORD))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   dword_55A7C8,
                   "WebServer",
                   0);
  v51 = (int)"C:\\Apache24\\htdocs\\ltl";
  HIDWORD(v50) = &v140;
  (**(void (__fastcall ***)(int, int *, const char *, const char *, __int32 *))dword_598054)(
    dword_598054,
    dword_55A7C8,
    "HTMpath",
    "C:\\Apache24\\htdocs\\ltl",
    &v140);
  __linkproc__ LStrAsg(&dword_59836C, v140);
  __linkproc__ LStrCat3(&dword_5985A8, (__int64 *)dword_598678, (__int64 *)"\\Htm");
  if ( dword_5980EC == 1 && DirectoryExists((char *)dword_59836C) )
  {
    __linkproc__ LStrCat3((volatile __int32 *)&v139, (__int64 *)dword_59836C, (__int64 *)"\\cv.gif");
    if ( !FileExists(v139) )
    {
      v51 = (int)"/c xcopy \"";
      HIDWORD(v50) = dword_597D08;
      LODWORD(v50) = "\\htm\\*.gif\" \"";
      v49 = (__int64 **)dword_59836C;
      v48 = "\" /y";
      __linkproc__ LStrCatN(v231, 5);
      v51 = 0;
      HIDWORD(v50) = 0;
      v19 = __linkproc__ LStrToPChar((char *)v231[0]);
      ShellExecuteA(0, 0, "cmd.exe", v19, (LPCSTR)HIDWORD(v50), v51);
    }
    __linkproc__ LStrCat3((volatile __int32 *)&v138, (__int64 *)dword_59836C, (__int64 *)"\\up.mp3");
    if ( !FileExists(v138) )
    {
      v51 = (int)"/c xcopy \"";
      HIDWORD(v50) = dword_597D08;
      LODWORD(v50) = "\\htm\\*.mp3\" \"";
      v49 = (__int64 **)dword_59836C;
      v48 = "\" /y";
      __linkproc__ LStrCatN(v231, 5);
      v51 = 0;
      HIDWORD(v50) = 0;
      v20 = __linkproc__ LStrToPChar((char *)v231[0]);
      ShellExecuteA(0, 0, "cmd.exe", v20, (LPCSTR)HIDWORD(v50), v51);
    }
    __linkproc__ LStrAsg(&dword_5985A8, dword_59836C);
  }
  __linkproc__ LStrCat3((volatile __int32 *)&v137, (__int64 *)dword_5985A8, (__int64 *)"\\cmd.txt");
  if ( FileExists(v137) )
  {
    v51 = (int)&savedregs;
    v50 = __PAIR64__(&loc_557832, __readfsdword(0));
    __writefsdword(0, (unsigned int)&v50);
    __linkproc__ LStrCat3((volatile __int32 *)&v136, (__int64 *)dword_5985A8, (__int64 *)"\\cmd.txt");
    v211 = v136;
    v21 = __linkproc__ LStrToPChar(v136);
    v210 = DeleteFileA(v21);
    __writefsdword(0, v50);
  }
  v51 = (int)"C:\\Apache24\\htdocs\\ltl";
  HIDWORD(v50) = &v135;
  (**(void (__fastcall ***)(int, int *, const char *, const char *, __int32 *))dword_598054)(
    dword_598054,
    dword_55A7C8,
    "Webhtmpath",
    "C:\\Apache24\\htdocs\\ltl",
    &v135);
  __linkproc__ LStrAsg(&dword_5983C4, v135);
  v51 = (int)"http://hostname.domain/ltl";
  HIDWORD(v50) = &v134;
  (**(void (__fastcall ***)(int, int *, const char *, const char *, __int32 *))dword_598054)(
    dword_598054,
    dword_55A7C8,
    "HTTPaddr",
    "http://hostname.domain/ltl",
    &v134);
  __linkproc__ LStrAsg(&dword_5983BC, v134);
  v51 = (int)"http://hostname.domain/cgi-bin/ltsearch.cgi";
  HIDWORD(v50) = &v133;
  (**(void (__fastcall ***)(int, int *, const char *, const char *, __int32 *))dword_598054)(
    dword_598054,
    dword_55A7C8,
    "HTTPscript",
    "http://hostname.domain/cgi-bin/ltsearch.cgi",
    &v133);
  __linkproc__ LStrAsg(&dword_5983C0, v133);
  v51 = (int)dword_55A8F4;
  HIDWORD(v50) = &v132;
  (**(void (__fastcall ***)(int, int *, const char *, int *, __int32 *))dword_598054)(
    dword_598054,
    dword_55A7C8,
    "htm_php",
    dword_55A8F4,
    &v132);
  __linkproc__ LStrAsg(&dword_59886C, v132);
  __linkproc__ LStrCmp(dword_59886C, dword_55A910);
  if ( v5 )
  {
    __linkproc__ LStrCat3((volatile __int32 *)&v131, (__int64 *)dword_59836C, (__int64 *)"\\nettop.htm");
    if ( FileExists(v131) )
    {
      v51 = (int)"/c del /q \"";
      HIDWORD(v50) = dword_59836C;
      LODWORD(v50) = "\\*.htm\"";
      __linkproc__ LStrCatN(v231, 3);
      v51 = 0;
      HIDWORD(v50) = 0;
      v22 = __linkproc__ LStrToPChar((char *)v231[0]);
      ShellExecuteA(0, 0, "cmd.exe", v22, (LPCSTR)HIDWORD(v50), v51);
    }
  }
  v51 = 0;
  dword_598110 = (*(int (__fastcall **)(int, const char *, const char *, _DWORD))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "Alarm",
                   "Playsound",
                   0);
  v51 = 0;
  HIDWORD(v50) = &v130;
  (**(void (__fastcall ***)(int, const char *, const char *, _DWORD, __int32 *))dword_598054)(
    dword_598054,
    "Alarm",
    "SoundPath",
    0,
    &v130);
  __linkproc__ LStrAsg(&dword_59835C, v130);
  v51 = 0;
  dword_598114 = (*(int (__fastcall **)(int, const char *, const char *, _DWORD))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "Alarm",
                   "Execfile",
                   0);
  v51 = (int)"C:\\tools\\snmpTrapGen.exe -r:192.168.0.35 -to:.1.3.6.1.2.1.1.4.0 -vid:1 -vtp:str -val:<text>";
  HIDWORD(v50) = &v129;
  (**(void (__fastcall ***)(int, const char *, const char *, const char *, __int32 *))dword_598054)(
    dword_598054,
    "Alarm",
    "ExecPath",
    "C:\\tools\\snmpTrapGen.exe -r:192.168.0.35 -to:.1.3.6.1.2.1.1.4.0 -vid:1 -vtp:str -val:<text>",
    &v129);
  __linkproc__ LStrAsg(&dword_598368, v129);
  if ( !dword_598368 )
    __linkproc__ LStrAsg(
      &dword_598368,
      (__int32)"C:\\tools\\snmpTrapGen.exe -r:192.168.0.35 -to:.1.3.6.1.2.1.1.4.0 -vid:1 -vtp:str -val:<text>");
  v51 = 0;
  dword_598118 = (*(int (__fastcall **)(int, const char *, const char *, _DWORD))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "Alarm",
                   "Sendmail",
                   0);
  v51 = (int)"true";
  HIDWORD(v50) = &v128;
  (**(void (__fastcall ***)(int, const char *, const char *, const char *, __int32 *))dword_598054)(
    dword_598054,
    "Alarm",
    "MailSSL",
    "true",
    &v128);
  __linkproc__ LStrAsg(&dword_5983D8, v128);
  v51 = 0;
  HIDWORD(v50) = &v127;
  (**(void (__fastcall ***)(int, const char *, const char *, _DWORD, __int32 *))dword_598054)(
    dword_598054,
    "Alarm",
    "SMTPfrom",
    0,
    &v127);
  __linkproc__ LStrAsg(&dword_598440, v127);
  v51 = (int)"smtp.gmail.com";
  HIDWORD(v50) = &v126;
  (**(void (__fastcall ***)(int, const char *, const char *, const char *, __int32 *))dword_598054)(
    dword_598054,
    "Alarm",
    "SMTPserver",
    "smtp.gmail.com",
    &v126);
  __linkproc__ LStrAsg(&dword_5983D0, v126);
  v51 = (int)dword_55AA8C;
  HIDWORD(v50) = &v125;
  (**(void (__fastcall ***)(int, const char *, const char *, int *, __int32 *))dword_598054)(
    dword_598054,
    "Alarm",
    "SMTPport",
    dword_55AA8C,
    &v125);
  __linkproc__ LStrAsg(&dword_598718, v125);
  v51 = 0;
  HIDWORD(v50) = &v124;
  (**(void (__fastcall ***)(int, const char *, const char *, _DWORD, __int32 *))dword_598054)(
    dword_598054,
    "Alarm",
    "SMTPuser",
    0,
    &v124);
  __linkproc__ LStrAsg(&dword_598438, v124);
  v51 = 0;
  HIDWORD(v50) = &v123;
  (**(void (__fastcall ***)(int, const char *, const char *, _DWORD, __int32 *))dword_598054)(
    dword_598054,
    "Alarm",
    "SMTPpassw",
    0,
    &v123);
  __linkproc__ LStrAsg(&dword_597C4C, v123);
  sub_52E3E4(dword_597C4C, (__int32)&v122);
  __linkproc__ LStrAsg(&dword_59843C, v122);
  v51 = 0;
  HIDWORD(v50) = &v121;
  (**(void (__fastcall ***)(int, const char *, const char *, _DWORD, __int32 *))dword_598054)(
    dword_598054,
    "Alarm",
    "MailTo",
    0,
    &v121);
  __linkproc__ LStrAsg(&dword_5983CC, v121);
  __linkproc__ LStrCat3(&dword_59859C, (__int64 *)dword_597CFC, (__int64 *)"\\lttmp");
  v51 = 0;
  HIDWORD(v50) = &v120;
  (**(void (__fastcall ***)(int, const char *, const char *, _DWORD, __int32 *))dword_598054)(
    dword_598054,
    "Alarm",
    "Site",
    0,
    &v120);
  __linkproc__ LStrAsg(&dword_5984F8, v120);
  v51 = 0;
  dword_598104 = (*(int (__fastcall **)(int, const char *, const char *, _DWORD))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "Alarm",
                   "SendTelegram",
                   0);
  v51 = 0;
  HIDWORD(v50) = &v119;
  (**(void (__fastcall ***)(int, const char *, const char *, _DWORD, __int32 *))dword_598054)(
    dword_598054,
    "Alarm",
    "Chat_id",
    0,
    &v119);
  __linkproc__ LStrAsg(&dword_59852C, v119);
  v51 = 0;
  HIDWORD(v50) = &v118;
  (**(void (__fastcall ***)(int, const char *, const char *, _DWORD, __int32 *))dword_598054)(
    dword_598054,
    "Alarm",
    "Token",
    0,
    &v118);
  __linkproc__ LStrAsg(&dword_597C4C, v118);
  sub_52E3E4(dword_597C4C, (__int32)&v117);
  __linkproc__ LStrAsg(&dword_598530, v117);
  v51 = (int)"C:\\import\\custom.csv";
  HIDWORD(v50) = &v116;
  (**(void (__fastcall ***)(int, const char *, const char *, const char *, __int32 *))dword_598054)(
    dword_598054,
    "Import",
    "path1",
    "C:\\import\\custom.csv",
    &v116);
  __linkproc__ LStrAsg(&dword_59837C, v116);
  v51 = (int)"C:\\\\import\\ip_name.csv";
  HIDWORD(v50) = &v115;
  (**(void (__fastcall ***)(int, const char *, const char *, const char *, __int32 *))dword_598054)(
    dword_598054,
    "Import",
    "path2",
    "C:\\\\import\\ip_name.csv",
    &v115);
  __linkproc__ LStrAsg(&dword_598380, v115);
  v51 = (int)dword_55ABAC;
  HIDWORD(v50) = &v114;
  (**(void (__fastcall ***)(int, const char *, const char *, int *, __int32 *))dword_598054)(
    dword_598054,
    "Import",
    "delim1",
    dword_55ABAC,
    &v114);
  __linkproc__ LStrAsg(&dword_59834C, v114);
  v51 = (int)dword_55ABAC;
  HIDWORD(v50) = &v113;
  (**(void (__fastcall ***)(int, const char *, const char *, int *, __int32 *))dword_598054)(
    dword_598054,
    "Import",
    "delim2",
    dword_55ABAC,
    &v113);
  __linkproc__ LStrAsg(&dword_598350, v113);
  v51 = (int)"15,15,15";
  HIDWORD(v50) = &v112;
  (**(void (__fastcall ***)(int, const char *, const char *, const char *, __int32 *))dword_598054)(
    dword_598054,
    "Import",
    "Column1",
    "15,15,15",
    &v112);
  __linkproc__ LStrAsg(&dword_598354, v112);
  v51 = 0;
  dword_598124 = (*(int (__fastcall **)(int, const char *, const char *, _DWORD))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "Import",
                   "AutoImportUser",
                   0);
  v51 = 0;
  dword_598120 = (*(int (__fastcall **)(int, const char *, const char *, _DWORD))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "Import",
                   "ClearOldUserData",
                   0);
  v51 = 0;
  dword_59811C = (*(int (__fastcall **)(int, const char *, const char *, _DWORD))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "Import",
                   "AutoImportARP",
                   0);
  __linkproc__ LStrAsg(&dword_598664, (__int32)"PLOKMIJNUHBYGVTFCRDXESZWAQ");
  if ( !byte_59800B )
  {
    v51 = (int)"C:\\export\\complist.csv";
    HIDWORD(v50) = &v111;
    (**(void (__fastcall ***)(int, const char *, const char *, const char *, __int32 *))dword_598054)(
      dword_598054,
      "Export",
      "ExpCompPath",
      "C:\\export\\complist.csv",
      &v111);
    __linkproc__ LStrAsg(&dword_598744, v111);
    v51 = (int)"C:\\export\\sw_conn.csv";
    HIDWORD(v50) = &v110;
    (**(void (__fastcall ***)(int, const char *, const char *, const char *, __int32 *))dword_598054)(
      dword_598054,
      "Export",
      "ExpSwConnPath",
      "C:\\export\\sw_conn.csv",
      &v110);
    __linkproc__ LStrAsg(&dword_598748, v110);
    v51 = (int)"C:\\export\\sw_list.csv";
    HIDWORD(v50) = &v109;
    (**(void (__fastcall ***)(int, const char *, const char *, const char *, __int32 *))dword_598054)(
      dword_598054,
      "Export",
      "ExpSwListPath",
      "C:\\export\\sw_list.csv",
      &v109);
    __linkproc__ LStrAsg(&dword_59874C, v109);
    v51 = (int)"C:\\export\\port_list.csv";
    HIDWORD(v50) = &v108;
    (**(void (__fastcall ***)(int, const char *, const char *, const char *, __int32 *))dword_598054)(
      dword_598054,
      "Export",
      "ExpPortListPath",
      "C:\\export\\port_list.csv",
      &v108);
    __linkproc__ LStrAsg(&dword_59871C, v108);
    v51 = (int)"C:\\export\\vlan_list.csv";
    HIDWORD(v50) = &v107;
    (**(void (__fastcall ***)(int, const char *, const char *, const char *, __int32 *))dword_598054)(
      dword_598054,
      "Export",
      "ExpVlanPath",
      "C:\\export\\vlan_list.csv",
      &v107);
    __linkproc__ LStrAsg(&dword_598720, v107);
    __linkproc__ LStrCat3((volatile __int32 *)&v105, (__int64 *)dword_598678, (__int64 *)"\\export\\lan_report.pdf");
    v51 = (int)v105;
    HIDWORD(v50) = &v106;
    (**(void (__fastcall ***)(int, const char *, const char *, __int64 **, __int32 *))dword_598054)(
      dword_598054,
      "Export",
      "ExpTopMapPathPDF",
      v105,
      &v106);
    __linkproc__ LStrAsg(&dword_598758, v106);
  }
  if ( byte_59800B == 1 )
  {
    __linkproc__ LStrCat3((volatile __int32 *)&v103, (__int64 *)dword_598678, (__int64 *)"\\export\\complist.csv");
    v51 = (int)v103;
    HIDWORD(v50) = &v104;
    (**(void (__fastcall ***)(int, const char *, const char *, __int64 **, __int32 *))dword_598054)(
      dword_598054,
      "Export",
      "ExpCompPath",
      v103,
      &v104);
    __linkproc__ LStrAsg(&dword_598744, v104);
    __linkproc__ LStrCat3((volatile __int32 *)&v101, (__int64 *)dword_598678, (__int64 *)"\\export\\sw_conn.csv");
    v51 = (int)v101;
    HIDWORD(v50) = &v102;
    (**(void (__fastcall ***)(int, const char *, const char *, __int64 **, __int32 *))dword_598054)(
      dword_598054,
      "Export",
      "ExpSwConnPath",
      v101,
      &v102);
    __linkproc__ LStrAsg(&dword_598748, v102);
    __linkproc__ LStrCat3((volatile __int32 *)&v99, (__int64 *)dword_598678, (__int64 *)"\\export\\sw_list.csv");
    v51 = (int)v99;
    HIDWORD(v50) = &v100;
    (**(void (__fastcall ***)(int, const char *, const char *, __int64 **, __int32 *))dword_598054)(
      dword_598054,
      "Export",
      "ExpSwListPath",
      v99,
      &v100);
    __linkproc__ LStrAsg(&dword_59874C, v100);
    __linkproc__ LStrCat3((volatile __int32 *)&v97, (__int64 *)dword_598678, (__int64 *)"\\export\\port_list.csv");
    v51 = (int)v97;
    HIDWORD(v50) = &v98;
    (**(void (__fastcall ***)(int, const char *, const char *, __int64 **, __int32 *))dword_598054)(
      dword_598054,
      "Export",
      "ExpPortListPath",
      v97,
      &v98);
    __linkproc__ LStrAsg(&dword_59871C, v98);
    __linkproc__ LStrCat3((volatile __int32 *)&v95, (__int64 *)dword_598678, (__int64 *)"\\export\\vlan_list.csv");
    v51 = (int)v95;
    HIDWORD(v50) = &v96;
    (**(void (__fastcall ***)(int, const char *, const char *, __int64 **, __int32 *))dword_598054)(
      dword_598054,
      "Export",
      "ExpVlanPath",
      v95,
      &v96);
    __linkproc__ LStrAsg(&dword_598720, v96);
    __linkproc__ LStrCat3((volatile __int32 *)&v93, (__int64 *)dword_598678, (__int64 *)"\\export\\lan_report.pdf");
    v51 = (int)v93;
    HIDWORD(v50) = &v94;
    (**(void (__fastcall ***)(int, const char *, const char *, __int64 **, __int32 *))dword_598054)(
      dword_598054,
      "Export",
      "ExpTopMapPathPDF",
      v93,
      &v94);
    __linkproc__ LStrAsg(&dword_598758, v94);
  }
  v51 = 0;
  dword_598198 = (*(int (__fastcall **)(int, const char *, const char *, _DWORD))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "Export",
                   "sw_conn",
                   0);
  ExtractFilePath((char *)dword_598758, &v92);
  __linkproc__ LStrAsg(&dword_59869C, (__int32)v92);
  v51 = 0;
  dword_5981F4 = (*(int (__fastcall **)(int, const char *, const char *, _DWORD))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "Export",
                   "AutoExportAll",
                   0);
  v51 = (int)dword_55AE88;
  HIDWORD(v50) = &v91;
  (**(void (__fastcall ***)(int, const char *, const char *, int *, __int32 *))dword_598054)(
    dword_598054,
    "Export",
    "ExportDelimiter",
    dword_55AE88,
    &v91);
  __linkproc__ LStrAsg(&dword_598740, v91);
  v51 = (int)"C:\\export\\wkhtmltox\\bin\\wkhtmltopdf.exe";
  HIDWORD(v50) = &v90;
  (**(void (__fastcall ***)(int, const char *, const char *, const char *, __int32 *))dword_598054)(
    dword_598054,
    "Export",
    "ExpWkhtmltopdfPath",
    "C:\\export\\wkhtmltox\\bin\\wkhtmltopdf.exe",
    &v90);
  __linkproc__ LStrAsg(&dword_5987AC, v90);
  ExtractFilePath((char *)dword_5987AC, &v89);
  __linkproc__ LStrCat3(&dword_5987B0, v89, (__int64 *)"wkhtmltoimage.exe");
  v51 = 0;
  HIDWORD(v50) = &v88;
  (**(void (__fastcall ***)(int, const char *, const char *, _DWORD, __int32 *))dword_598054)(
    dword_598054,
    "Export",
    "ExpWkhtmltopdfOptions",
    0,
    &v88);
  __linkproc__ LStrAsg(&dword_59875C, v88);
  v51 = 0;
  dword_5981E0 = (*(int (__fastcall **)(int, const char *, const char *, _DWORD))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "Export",
                   "AutoExportAllPDF",
                   0);
  v51 = 1;
  dword_598200 = (*(int (__fastcall **)(int, const char *, const char *, int))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "Export",
                   "topmapPDF",
                   1);
  v51 = 1;
  dword_598204 = (*(int (__fastcall **)(int, const char *, const char *, int))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "Export",
                   "swlistPDF",
                   1);
  v51 = 1;
  dword_598208 = (*(int (__fastcall **)(int, const char *, const char *, int))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "Export",
                   "swconnPDF",
                   1);
  v51 = 1;
  dword_59820C = (*(int (__fastcall **)(int, const char *, const char *, int))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "Export",
                   "portlistPDF",
                   1);
  v51 = 1;
  dword_598210 = (*(int (__fastcall **)(int, const char *, const char *, int))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "Export",
                   "vlanlistPDF",
                   1);
  v51 = 1;
  dword_59821C = (*(int (__fastcall **)(int, const char *, const char *, int))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "Export",
                   "stpinfoPDF",
                   1);
  v51 = (int)"C:\\Program Files\\draw.io\\draw.io.exe";
  HIDWORD(v50) = &v87;
  (**(void (__fastcall ***)(int, const char *, const char *, const char *, __int32 *))dword_598054)(
    dword_598054,
    "Export",
    "DrawioExePath",
    "C:\\Program Files\\draw.io\\draw.io.exe",
    &v87);
  __linkproc__ LStrAsg(&dword_5988BC, v87);
  __linkproc__ LStrCat3((volatile __int32 *)&v85, (__int64 *)dword_598678, (__int64 *)"\\export\\top_map.xml");
  v51 = (int)v85;
  HIDWORD(v50) = &v86;
  (**(void (__fastcall ***)(int, const char *, const char *, __int64 **, __int32 *))dword_598054)(
    dword_598054,
    "Export",
    "DrawioXmlPath",
    v85,
    &v86);
  __linkproc__ LStrAsg(&dword_5988C0, v86);
  v51 = 1;
  dword_597E88 = (*(int (__fastcall **)(int, const char *, const char *, int))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "Traffic",
                   "TrafMonitor",
                   1);
  v51 = 0;
  dword_597E60 = (*(int (__fastcall **)(int, const char *, const char *, _DWORD))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "Traffic",
                   "TrafNotify",
                   0);
  v51 = 0;
  dword_597E7C = (*(int (__fastcall **)(int, const char *, const char *, _DWORD))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "Traffic",
                   "ErrDiscardNotify",
                   0);
  v51 = 0;
  dword_597E64 = (*(int (__fastcall **)(int, const char *, const char *, _DWORD))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "Discovery",
                   "STPchangeNotify",
                   0);
  v51 = 0;
  dword_598144 = (*(int (__fastcall **)(int, const char *, const char *, _DWORD))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "Traffic",
                   "UseFile",
                   0);
  v51 = 95;
  dword_598148 = (*(int (__fastcall **)(int, const char *, const char *, int))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "Traffic",
                   "Bandwidth_thresh",
                   95);
  v51 = 1234567890;
  qword_598038 = (*(int (__fastcall **)(int, const char *, int *, int))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "Discovery",
                   dword_55B0DC,
                   1234567890);
  v51 = (int)"0.00.00";
  HIDWORD(v50) = v233;
  (**(void (__fastcall ***)(int, const char *, const char *, const char *, __int64 **))dword_598054)(
    dword_598054,
    "General",
    "lt_ver",
    "0.00.00",
    v233);
  __linkproc__ LStrCmp((int)v233[0], (int *)"2.48.26");
  if ( v23 )
  {
    v51 = 900;
    (*(void (__fastcall **)(int, const char *, const char *, int, int))(*(_DWORD *)dword_598054 + 12))(
      dword_598054,
      "Traffic",
      "ErrorPercent",
      v52,
      900);
    v52 = 900;
    (*(void (__fastcall **)(int, const char *, const char *, int))(*(_DWORD *)dword_598054 + 12))(
      dword_598054,
      "Traffic",
      "DiscardPercent",
      900);
    v52 = (int)&savedregs;
    v51 = (int)&loc_55842B;
    HIDWORD(v50) = __readfsdword(0);
    __writefsdword(0, (unsigned int)&v50 + 4);
    LODWORD(v50) = dword_598694;
    (*(void (__fastcall **)(int, const char *, const char *))(*(_DWORD *)dword_598054 + 4))(
      dword_598054,
      "General",
      "lt_ver");
    __writefsdword(0, v50);
  }
  v51 = 900;
  dword_59826C = (*(int (__fastcall **)(int, const char *, const char *, int))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "Traffic",
                   "ErrorPercent",
                   900);
  v51 = 900;
  dword_598270 = (*(int (__fastcall **)(int, const char *, const char *, int))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "Traffic",
                   "DiscardPercent",
                   900);
  v51 = 60;
  v24 = *(struct _EXCEPTION_REGISTRATION_RECORD **)dword_598054;
  dword_59815C = (*(int (__fastcall **)(int, const char *, const char *, int))(*(_DWORD *)dword_598054 + 8))(
                   dword_598054,
                   "Traffic",
                   "Traf60_24",
                   60);
  __linkproc__ LStrAsg(&dword_598668, (__int32)"0987654321#@$");
  v51 = dword_598664;
  v50 = __PAIR64__(dword_598668, dword_598660);
  __linkproc__ LStrCatN(&dword_598650, 3);
  byte_59801D = 1;
  (*(void (__fastcall **)(int))(*(_DWORD *)dword_597B0C + 68))(dword_597B0C);
  dword_598274 = 999999;
  __linkproc__ LStrClr(&dword_598828);
  byte_598021 = 0;
  dword_597F18 = 1;
  dword_597E9C = 10;
  sub_52C10C();
  __linkproc__ LStrCat3((volatile __int32 *)&v84, (__int64 *)dword_598678, (__int64 *)"\\Data\\sw_macs.txt");
  if ( FileExists(v84) )
  {
    v51 = (int)&savedregs;
    v50 = __PAIR64__(&loc_558564, __readfsdword(0));
    __writefsdword(0, (unsigned int)&v50);
    __linkproc__ LStrCat3(&v83, (__int64 *)dword_598678, (__int64 *)"\\data\\sw_macs.txt");
    (*(void (__fastcall **)(int, __int32))(*(_DWORD *)dword_597C34 + 104))(dword_597C34, v83);
    __writefsdword(0, v50);
  }
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)dword_597C34 + 20))(dword_597C34) > 0 )
  {
    v24 = *(struct _EXCEPTION_REGISTRATION_RECORD **)dword_597C34;
    (*(void (__fastcall **)(int, _DWORD, int *))(*(_DWORD *)dword_597C34 + 12))(dword_597C34, 0, &v82);
    if ( (int)Pos((int)dword_559B38, v82) > 0 )
    {
      v51 = (int)&v81;
      v25 = (*(int (__fastcall **)(int))(*(_DWORD *)dword_597C34 + 20))(dword_597C34);
      v24 = *(struct _EXCEPTION_REGISTRATION_RECORD **)dword_597C34;
      (*(void (__fastcall **)(int, int, int *))(*(_DWORD *)dword_597C34 + 12))(dword_597C34, v25 - 1, &v80);
      __linkproc__ LStrCopy(v80, 1, 1, (__int64 **)v51);
      __linkproc__ LStrCmp(v81, dword_559B2C);
      if ( !v5 )
      {
        sub_4F26A0(v233);
        __linkproc__ LStrCat3(&v79, (__int64 *)dword_55B1AC, v233[0]);
        (*(void (__fastcall **)(int, __int32))(*(_DWORD *)dword_597C34 + 56))(dword_597C34, v79);
        byte_59801E = 1;
        v51 = (int)&savedregs;
        v50 = __PAIR64__(&loc_558665, __readfsdword(0));
        __writefsdword(0, (unsigned int)&v50);
        __linkproc__ LStrCat3(&v78, (__int64 *)dword_598678, (__int64 *)"\\data\\sw_macs.txt");
        (*(void (__fastcall **)(int, __int32))(*(_DWORD *)dword_597C34 + 116))(dword_597C34, v78);
        __writefsdword(0, v50);
      }
    }
  }
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)dword_597C34 + 20))(dword_597C34) > 0 )
  {
    v24 = *(struct _EXCEPTION_REGISTRATION_RECORD **)dword_597C34;
    (*(void (__fastcall **)(int, _DWORD, int *))(*(_DWORD *)dword_597C34 + 12))(dword_597C34, 0, &v77);
    if ( !Pos((int)dword_559B38, v77) )
      sub_4F1E18();
  }
  byte_59801E = sub_4F25F4((int)v24);
  dword_597E9C = 11;
  sub_4E993C();
  dword_597E9C = 12;
  sub_50BB7C();
  __linkproc__ LStrAsg(&dword_598318, (__int32)dword_55ABAC);
  __linkproc__ LStrAsg(&dword_59831C, (__int32)dword_55ABAC);
  sub_4E8190();
  v51 = (int)&savedregs;
  v50 = __PAIR64__(&loc_558731, __readfsdword(0));
  __writefsdword(0, (unsigned int)&v50);
  __linkproc__ LStrCat3(&v76, (__int64 *)dword_598678, (__int64 *)"\\data\\wmi_db.txt");
  (*(void (__fastcall **)(int, __int32))(*(_DWORD *)dword_597E34 + 104))(dword_597E34, v76);
  __writefsdword(0, v50);
  sub_4EC768();
  sub_4F06D4(v24, a4, a5);
  dword_597E9C = 13;
  __linkproc__ LStrCat3((volatile __int32 *)&v75, (__int64 *)dword_597D08, (__int64 *)"\\import\\vendors.txt");
  if ( FileExists(v75) )
  {
    v51 = (int)&savedregs;
    v50 = __PAIR64__(&loc_5587B2, __readfsdword(0));
    __writefsdword(0, (unsigned int)&v50);
    __linkproc__ LStrCat3(&v74, (__int64 *)dword_597D08, (__int64 *)"\\import\\vendors.txt");
    (*(void (__fastcall **)(int, __int32))(*(_DWORD *)dword_597D64 + 104))(dword_597D64, v74);
    __writefsdword(0, v50);
  }
  __linkproc__ LStrCat3((volatile __int32 *)&v73, (__int64 *)dword_598678, (__int64 *)"\\misc\\portmon.txt");
  if ( FileExists(v73) )
  {
    v51 = (int)&savedregs;
    v50 = __PAIR64__(&loc_558823, __readfsdword(0));
    __writefsdword(0, (unsigned int)&v50);
    __linkproc__ LStrCat3(&v72, (__int64 *)dword_598678, (__int64 *)"\\misc\\portmon.txt");
    (*(void (__fastcall **)(int, __int32))(*(_DWORD *)dword_597D8C + 104))(dword_597D8C, v72);
    __writefsdword(0, v50);
    v26 = (*(int (__fastcall **)(int))(*(_DWORD *)dword_597D8C + 20))(dword_597D8C) - 1;
    if ( v26 >= 0 )
    {
      v230 = v26 + 1;
      v235 = 0;
      do
      {
        (*(void (__fastcall **)(int, int, char **))(*(_DWORD *)dword_597D8C + 12))(dword_597D8C, v235, &v71);
        TStrings::SetCommaText((_DWORD *)dword_597AD8, v71);
        if ( (*(int (__fastcall **)(int))(*(_DWORD *)dword_597AD8 + 20))(dword_597AD8) > 5 )
          (*(void (__fastcall **)(int, int, _DWORD))(*(_DWORD *)dword_597AD8 + 32))(dword_597AD8, 5, 0);
        TStrings::GetCommaText((_BYTE *)dword_597AD8, &v70);
        v24 = *(struct _EXCEPTION_REGISTRATION_RECORD **)dword_597D8C;
        (*(void (__fastcall **)(int, int, __int64 *))(*(_DWORD *)dword_597D8C + 32))(dword_597D8C, v235++, v70);
        --v230;
      }
      while ( v230 );
    }
  }
  __linkproc__ LStrCmp(dword_598768, (int *)dword_598364);
  if ( !v5 )
  {
    sub_4E95D4();
    __linkproc__ LStrAsg(&dword_598768, dword_598364);
    v51 = (int)&savedregs;
    v50 = __PAIR64__(&loc_55890E, __readfsdword(0));
    __writefsdword(0, (unsigned int)&v50);
    v49 = (__int64 **)dword_598768;
    v24 = *(struct _EXCEPTION_REGISTRATION_RECORD **)dword_598054;
    (*(void (__fastcall **)(int, const char *, const char *, int))(*(_DWORD *)dword_598054 + 4))(
      dword_598054,
      "General",
      "RunDaily",
      dword_598768);
    __writefsdword(0, v50);
  }
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)dword_597D20 + 20))(dword_597D20) < 9980 )
  {
    v27 = (*(int (__fastcall **)(int))(*(_DWORD *)dword_597D20 + 20))(dword_597D20) + 10;
    if ( v27 >= 0 )
    {
      v230 = v27 + 1;
      dword_597E6C = 0;
      do
      {
        byte_599064[dword_597E6C++] = dword_598214 + 1;
        --v230;
      }
      while ( v230 );
    }
  }
  dword_598B1C = -1;
  (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(v236 + 868) + 228))(*(_DWORD *)(v236 + 868), 0);
  dword_597E94 = 30;
  dword_598B08 = 0;
  dword_597E9C = 13;
  CreateOleObject("WbemScripting.SWbemLocator", &v69);
  __linkproc__ VarFromDisp(&stru_59B7CC, v69, v28);
  __linkproc__ OleVarFromLStr(&stru_598B48, "navNoHistory, navNoReadFromCache, navNoWriteToCache");
  TControl::SetVisible(*(_DWORD *)(v236 + 1308), 1u);
  TControl::SetVisible(*(_DWORD *)(v236 + 1312), 0);
  TControl::SetVisible(*(_DWORD *)(v236 + 1316), 0);
  __linkproc__ LStrAsg(&dword_5982D4, (__int32)"View");
  __linkproc__ LStrAsg(&dword_5982D8, (__int32)dword_55B27C);
  __linkproc__ LStrAsg(&dword_5982DC, (__int32)"Remove");
  __linkproc__ LStrAsg(&dword_5982E0, (__int32)"Mark");
  dword_597E44 = 0;
  __linkproc__ LStrAsg(&dword_598444, (__int32)"The previous assignment (");
  __linkproc__ LStrAsg(&dword_598448, (__int32)") will be canceled");
  TControl::SetText(*(_DWORD *)(dword_597AD4 + 1320), (int *)dword_5982D4);
  TControl::SetText(*(_DWORD *)(dword_597AD4 + 1324), (int *)dword_5982D8);
  TFont::SetColor(*(int **)(*(_DWORD *)(v236 + 1320) + 104), 11842740);
  TFont::SetColor(*(int **)(*(_DWORD *)(v236 + 1324) + 104), 11842740);
  byte_598012 = 0;
  (*(void (__fastcall **)(int))(*(_DWORD *)dword_597AD8 + 68))(dword_597AD8);
  (*(void (__fastcall **)(int, const char *))(*(_DWORD *)dword_597AD8 + 56))(
    dword_597AD8,
    "This page is not ready yet. Please wait about 10 minutes.");
  __linkproc__ LStrCat3((volatile __int32 *)&v68, (__int64 *)dword_598678, (__int64 *)"\\htm\\stp.htm");
  if ( !FileExists(v68) )
  {
    v51 = (int)&savedregs;
    v50 = __PAIR64__(&loc_558B3C, __readfsdword(0));
    __writefsdword(0, (unsigned int)&v50);
    __linkproc__ LStrCat3(&v67, (__int64 *)dword_598678, (__int64 *)"\\htm\\stp.htm");
    (*(void (__fastcall **)(int, __int32))(*(_DWORD *)dword_597AD8 + 116))(dword_597AD8, v67);
    __writefsdword(0, v50);
    v24 = *(struct _EXCEPTION_REGISTRATION_RECORD **)dword_597AD8;
    (*(void (__fastcall **)(int, _DWORD, const char *))(*(_DWORD *)dword_597AD8 + 96))(
      dword_597AD8,
      0,
      "<br><H2 align=\"center\">STP info</H2>");
    v51 = (int)&savedregs;
    v50 = __PAIR64__(&loc_558B95, __readfsdword(0));
    __writefsdword(0, (unsigned int)&v50);
    __linkproc__ LStrCat3(&v66, (__int64 *)dword_598678, (__int64 *)"\\htm\\stppdf.htm");
    (*(void (__fastcall **)(int, __int32))(*(_DWORD *)dword_597AD8 + 116))(dword_597AD8, v66);
    __writefsdword(0, v50);
  }
  dword_597E9C = 14;
  sub_51BE08(0, (int)a4, (int)a5);
  LOWORD(v29) = 1;
  v30 = EncodeDateTime(0x7E4u, 1u, v29, 0, 0, 0, 1);
  dbl_59B778 = v30;
  if ( sub_52D664() )
  {
    dword_597E9C = 15;
    sub_52AE80((int)v24);
    dword_597E9C = 16;
    sub_52E454((int)a4, (int)a5);
    dword_597E9C = 17;
    sub_5012D4(0, (int)a4, (int)a5);
    dword_597E9C = 18;
    sub_51C29C((int)a4, (int)a5);
    dword_597E9C = 19;
    sub_57F7EC(v236);
    dword_597E9C = 20;
    byte_59801F = 0;
    dword_5981D0 = -1;
    dword_5981CC = 0;
    dword_5981D4 = 0;
    dword_598228 = 0;
    if ( !byte_598010 )
    {
      sub_531ED4();
      sub_532170();
    }
    sub_516060(0, 1, (int)a4, (int)a5);
    dword_597E9C = 21;
    Idcoderheader::DecodeHeader((int)dword_55B38C, dword_597E04, (int)v24, (int)a4, (int)a5);
    dword_597E9C = 22;
    (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(v236 + 868) + 228))(*(_DWORD *)(v236 + 868), 3);
  }
  byte_598004 = 0;
  byte_59800F = 0;
  __linkproc__ LStrCat3(&dword_5986F8, (__int64 *)dword_598678, (__int64 *)"\\htm\\blank.htm");
  v31 = (*(int (__fastcall **)(int))(*(_DWORD *)dword_5988FC + 20))(dword_5988FC) - 1;
  if ( v31 >= 0 )
  {
    v230 = v31 + 1;
    dword_597E6C = 0;
    while ( 1 )
    {
      v24 = *(struct _EXCEPTION_REGISTRATION_RECORD **)dword_5988FC;
      (*(void (__fastcall **)(int, int, int *))(*(_DWORD *)dword_5988FC + 12))(dword_5988FC, dword_597E6C, &v65);
      if ( Pos((int)"<a href=\"s", v65) == (_BYTE *)1 )
        break;
      ++dword_597E6C;
      if ( !--v230 )
        goto LABEL_165;
    }
    v51 = (int)&dword_597C4C;
    v24 = *(struct _EXCEPTION_REGISTRATION_RECORD **)dword_5988FC;
    (*(void (__fastcall **)(int, int, int *, int *))(*(_DWORD *)dword_5988FC + 12))(
      dword_5988FC,
      dword_597E6C,
      &v64,
      &dword_597C4C);
    __linkproc__ LStrCopy(v64, 11, 0x7FFFFFFF, (__int64 **)v52);
    dword_597E70 = (int)Pos((int)dword_559DF4, dword_597C4C);
    v52 = dword_598678;
    v51 = (int)"\\htm\\s";
    __linkproc__ LStrCopy(dword_597C4C, 1, dword_597E70 - 1, &v63);
    HIDWORD(v50) = v63;
    __linkproc__ LStrCatN((__int64 **)&dword_5986F8, 3);
    __linkproc__ LStrAsg(&dword_5986D4, dword_5986F8);
  }
LABEL_165:
  if ( !sub_52D664() )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)dword_597AD8 + 68))(dword_597AD8);
    __linkproc__ LStrCat3((volatile __int32 *)&v62, (__int64 *)dword_598678, (__int64 *)"\\htm");
    if ( DirectoryExists(v62) )
    {
      v51 = (int)&savedregs;
      v50 = __PAIR64__(&loc_558E3D, __readfsdword(0));
      __writefsdword(0, (unsigned int)&v50);
      __linkproc__ LStrCat3(&v61, (__int64 *)dword_598678, (__int64 *)"\\htm\\nettop.htm");
      (*(void (__fastcall **)(int, __int32))(*(_DWORD *)dword_597AD8 + 116))(dword_597AD8, v61);
      __writefsdword(0, v50);
    }
  }
  if ( sub_52D664() )
  {
    __linkproc__ LStrCat3((volatile __int32 *)&v60, (__int64 *)dword_598678, (__int64 *)"\\htm\\nettop.htm");
    if ( FileExists(v60) )
    {
      v51 = (int)&savedregs;
      v50 = __PAIR64__(&loc_558ECC, __readfsdword(0));
      __writefsdword(0, (unsigned int)&v50);
      __linkproc__ LStrCat3((volatile __int32 *)&v58, (__int64 *)dword_598678, (__int64 *)"\\htm\\nettop.htm");
      __linkproc__ WStrFromLStr((int *)&v59, v58);
      unknown_libname_3571(*(_DWORD **)(v236 + 972), (int)v59, (int)a4);
      __writefsdword(0, v50);
    }
    if ( FileExists((char *)dword_5986F8) )
    {
      v51 = (int)&savedregs;
      v50 = __PAIR64__(&loc_558F21, __readfsdword(0));
      __writefsdword(0, (unsigned int)&v50);
      __linkproc__ WStrFromLStr((int *)&v57, (const CHAR *)dword_5986F8);
      unknown_libname_3571(*(_DWORD **)(v236 + 1060), (int)v57, (int)a4);
      __writefsdword(0, v50);
    }
  }
  byte_598009 = (*(int (__fastcall **)(int))(*(_DWORD *)dword_597D20 + 20))(dword_597D20) == 0;
  dword_597E9C = 23;
  sub_4F9B54(0, 0, *(double *)&v30);
  byte_598020 = 1;
  __linkproc__ LStrAsg(
    (volatile __int32 *)(*(_DWORD *)(v236 + 1196) + 132),
    (__int32)"Test SNMP access. Update sysName, sysLocation.");
  TControl::SetVisible(*(_DWORD *)(v236 + 1204), 0);
  TControl::SetVisible(*(_DWORD *)(v236 + 1240), 1u);
  TControl::SetVisible(*(_DWORD *)(v236 + 1488), 0);
  TControl::SetVisible(*(_DWORD *)(v236 + 1492), 1u);
  dword_597E9C = 24;
  sub_5298AC("LanTopoLog is started", dword_597B8C, 0, (int)a4, (int)a5);
  dword_5980F0 = 0;
  dword_598EE4 = 0;
  dword_598EE8 = 0;
  dword_598EEC = 0;
  dword_598EF0 = 0;
  dword_598EF4 = 0;
  dword_598EF8 = 0;
  dword_598EFC = 0;
  dword_598F00 = 0;
  sub_564D9C(v236);
  dword_598234 = 0;
  dword_598238 = 0;
  dword_59823C = 0;
  dword_598240 = 0;
  dword_598244 = 0;
  dword_598248 = 0;
  dword_59824C = 0;
  dword_598250 = 0;
  dword_598140 = 0;
  qword_598040 = 0i64;
  dword_598A84 = dword_598A80;
  dword_598188 = 0;
  dword_598254 = 0;
  dword_59822C = 8;
  dword_598230 = 0;
  dword_598B40 = -1;
  dword_598B44 = -1;
  dword_597E80 = 0;
  if ( dword_598614 )
    __linkproc__ LStrCat3(&dword_597C4C, (__int64 *)dword_598614, (__int64 *)" version");
  else
    __linkproc__ LStrClr(&dword_597C4C);
  TApplication::GetTitle(*off_592C9C[0], (volatile __int32 *)&v55);
  v51 = (int)v55;
  v50 = __PAIR64__(dword_559B2C, dword_597C4C);
  v49 = (__int64 **)dword_5985EC;
  __linkproc__ LStrCatN(&v56, 4);
  TControl::SetText(dword_597AD4, (int *)v56);
  v51 = (int)"Version ";
  HIDWORD(v50) = dword_598694;
  LODWORD(v50) = dword_559B2C;
  v49 = (__int64 **)dword_598614;
  __linkproc__ LStrCatN(&dword_59860C, 4);
  if ( dword_5980EC == 1 )
  {
    dword_597E9C = 25;
    v32 = sub_51E588((char *)dword_59886C, (int)v24, (int)a4, (int)a5);
    dword_597E9C = 26;
    sub_51EDF4(v32, v33, v34);
  }
  if ( dword_598614 )
    TMenuItem::SetCaption(*(int **)(v236 + 1048), (int *)dword_5986A4);
  else
    TMenuItem::SetCaption(*(int **)(v236 + 1048), (int *)dword_5986A0);
  dword_5981A4 = 0;
  dword_597E9C = 27;
  sub_5351E8(v24, (int)a4, (int)a5);
  v51 = (int)&savedregs;
  v50 = __PAIR64__(&loc_559200, __readfsdword(0));
  __writefsdword(0, (unsigned int)&v50);
  __linkproc__ LStrCat3(&v54, (__int64 *)dword_598678, (__int64 *)"\\data\\wmi_db.txt");
  (*(void (__fastcall **)(int, __int32))(*(_DWORD *)dword_597E34 + 104))(dword_597E34, v54);
  __writefsdword(0, v50);
  dword_597E6C = (*(int (__fastcall **)(int))(*(_DWORD *)dword_597E34 + 20))(dword_597E34);
  __linkproc__ LStrClr(&dword_5987B8);
  (*(void (__fastcall **)(int))(*(_DWORD *)dword_597E24 + 68))(dword_597E24);
  (*(void (__fastcall **)(int))(*(_DWORD *)dword_59B7BC + 68))(dword_59B7BC);
  dword_597F4C = 0;
  dword_597E40 = 0;
  dword_597E4C = 120;
  dword_597F30 = 90;
  dword_597EE4 = 190;
  dword_597F1C = 0;
  dword_598ACC = 0;
  dword_597EA0 = 0;
  dword_597EA4 = 0;
  dword_597F54 = 0;
  dword_597F58 = 0;
  __linkproc__ LStrLAsg((volatile __int32 *)v231, (__int32)"/c ver > %temp%\\ltver.tmp");
  v51 = 0;
  HIDWORD(v50) = 0;
  v35 = __linkproc__ LStrToPChar((char *)v231[0]);
  ShellExecuteA(0, 0, "cmd.exe", v35, (LPCSTR)HIDWORD(v50), v51);
  __linkproc__ LStrLAsg((volatile __int32 *)v231, (__int32)"/c ipconfig > %temp%\\ltipcfg.tmp");
  v51 = 0;
  HIDWORD(v50) = 0;
  v36 = __linkproc__ LStrToPChar((char *)v231[0]);
  ShellExecuteA(0, 0, "cmd.exe", v36, (LPCSTR)HIDWORD(v50), v51);
  __linkproc__ LStrClr(&dword_59882C);
  __linkproc__ LStrClr(&dword_598830);
  TControl::SetText(*(_DWORD *)(v236 + 1372), 0);
  __linkproc__ LStrClr(&dword_5987E8);
  __linkproc__ LStrClr(&dword_598314);
  dword_598290 = -1;
  byte_598011 = 0;
  (*(void (__fastcall **)(int))(*(_DWORD *)dword_597C20 + 68))(dword_597C20);
  dword_598028 = GetTickCount();
  dword_59802C = 0;
  Ibutils::TIBTimer::SetEnabled(*(_DWORD **)(v236 + 984), 1);
  Ibutils::TIBTimer::SetEnabled(*(_DWORD **)(v236 + 976), 1);
  byte_598019 = 1;
  dword_5980FC = 10;
  unknown_libname_2623(*(_DWORD **)(v236 + 1400), 6000);
  Ibutils::TIBTimer::SetEnabled(*(_DWORD **)(v236 + 1400), 1);
  byte_598013 = 0;
  byte_59800D = 0;
  byte_59800E = 0;
  dword_597E9C = 28;
  v37 = *off_592C9C[0];
  *(_DWORD *)(v37 + 236) = v236;
  *(_DWORD *)(v37 + 232) = sub_55B750;
  dword_598284 = 0;
  dword_597F68 = 0;
  dword_597F6C = 0;
  __linkproc__ LStrAsg(&dword_598298, (__int32)dword_55ABAC);
  __linkproc__ LStrAsg(&dword_5982A0, (__int32)dword_55ABAC);
  __linkproc__ LStrAsg(&dword_59829C, (__int32)dword_55ABAC);
  dword_597F38 = 0;
  dword_597F3C = 0;
  dword_598180 = 0;
  dword_597F74 = 0;
  dword_597F78 = 0;
  dword_597F7C = 0;
  dword_597F80 = 0;
  dword_597F84 = 0;
  dword_597F88 = 0;
  dword_597F8C = 0;
  dword_597F90 = 0;
  dword_59819C = 0;
  dword_597F04 = 0;
  dword_597F08 = 0;
  dword_597F0C = 0;
  dword_597F10 = 0;
  dword_597F20 = 0;
  dword_597F24 = 0;
  dword_597F28 = 0;
  dword_597F2C = 0;
  dword_598174 = 0;
  byte_598016 = 0;
  dword_59817C = 0;
  dword_598B14 = -1;
  dword_598B30 = -1;
  dword_598B34 = -1;
  dword_598B38 = -1;
  dword_597F44 = 0;
  dword_597F48 = 0;
  dword_597E9C = 29;
  sub_58917C(v236, 0xEFu, 0x22u, (_DWORD *)dword_59B794);
  v38 = unknown_libname_2565(*(int **)(*(_DWORD *)(v236 + 1416) + 408));
  (*(void (__fastcall **)(int, int))(*(_DWORD *)v38 + 8))(v38, dword_59B794);
  v39 = unknown_libname_2565(*(int **)(*(_DWORD *)(v236 + 1420) + 408));
  (*(void (__fastcall **)(int, int))(*(_DWORD *)v39 + 8))(v39, dword_59B794);
  v40 = unknown_libname_2565(*(int **)(*(_DWORD *)(v236 + 1424) + 408));
  (*(void (__fastcall **)(int, int))(*(_DWORD *)v40 + 8))(v40, dword_59B794);
  v41 = unknown_libname_2565(*(int **)(*(_DWORD *)(v236 + 1428) + 408));
  (*(void (__fastcall **)(int, int))(*(_DWORD *)v41 + 8))(v41, dword_59B794);
  v42 = unknown_libname_2565(*(int **)(*(_DWORD *)(v236 + 1464) + 408));
  (*(void (__fastcall **)(int, int))(*(_DWORD *)v42 + 8))(v42, dword_59B794);
  sub_58917C(v236, 0xB8u, 0x22u, (_DWORD *)dword_59B790);
  sub_58917C(v236, 0x59u, 0x1Du, (_DWORD *)dword_59B78C);
  v43 = unknown_libname_2565(*(int **)(*(_DWORD *)(v236 + 1340) + 408));
  (*(void (__fastcall **)(int, int))(*(_DWORD *)v43 + 8))(v43, dword_59B78C);
  v44 = unknown_libname_2565(*(int **)(*(_DWORD *)(v236 + 1468) + 408));
  (*(void (__fastcall **)(int, int))(*(_DWORD *)v44 + 8))(v44, dword_59B78C);
  dword_597E9C = 30;
  sub_58917C(v236, 0xB8u, 0x22u, (_DWORD *)dword_59B790);
  sub_58917C(v236, 0x59u, 0x1Du, (_DWORD *)dword_59B78C);
  v45 = unknown_libname_2565(*(int **)(*(_DWORD *)(v236 + 1340) + 408));
  (*(void (__fastcall **)(int, int))(*(_DWORD *)v45 + 8))(v45, dword_59B78C);
  dword_597E9C = 31;
  sub_5890C4(v236, 0x50u, 0x3Cu, (_DWORD *)dword_59B79C, 1);
  dword_597E9C = 32;
  sub_589468(v236, 2u, *(_DWORD *)(v236 + 1268), (int)v24);
  sub_589468(v236, 3u, *(_DWORD *)(v236 + 1272), (int)v24);
  sub_589468(v236, 0, *(_DWORD *)(v236 + 1276), (int)v24);
  sub_589468(v236, 1u, *(_DWORD *)(v236 + 1280), (int)v24);
  sub_589468(v236, 0xCu, *(_DWORD *)(v236 + 1292), (int)v24);
  sub_589468(v236, 0xDu, *(_DWORD *)(v236 + 1296), (int)v24);
  sub_589468(v236, 8u, *(_DWORD *)(v236 + 1308), (int)v24);
  sub_589468(v236, 9u, *(_DWORD *)(v236 + 1312), (int)v24);
  sub_589468(v236, 0xAu, *(_DWORD *)(v236 + 1316), (int)v24);
  dword_597E9C = 33;
  sub_5890C4(v236, 0x50u, 0x3Cu, (_DWORD *)dword_59B79C, 0);
  sub_589468(v236, 4u, *(_DWORD *)(v236 + 1328), (int)v24);
  sub_58917C(v236, 0x78u, 0x1Du, (_DWORD *)dword_59B798);
  dword_597E9C = 34;
  __linkproc__ LStrCat3(&dword_597D04, (__int64 *)dword_598678, (__int64 *)"\\Misc\\sendmail.log");
  (*(void (__fastcall **)(int))(*(_DWORD *)dword_597AD8 + 68))(dword_597AD8);
  v51 = (int)&savedregs;
  v50 = __PAIR64__(&loc_5597E8, __readfsdword(0));
  __writefsdword(0, (unsigned int)&v50);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)dword_597AD8 + 116))(dword_597AD8, dword_597D04);
  __writefsdword(0, v50);
  v51 = dword_597D08;
  HIDWORD(v50) = "\\scr";
  LODWORD(v50) = "ipt\\SwithMai";
  v49 = (__int64 **)dword_55B510;
  v48 = (const char *)dword_55B51C;
  __linkproc__ LStrCatN(&dword_597D0C, 5);
  __linkproc__ LStrLAsg((volatile __int32 *)v233, (__int32)"\\script\\curl\\curl.exe");
  __linkproc__ LStrCat3((volatile __int32 *)&v53, (__int64 *)dword_597D08, v233[0]);
  if ( FileExists(v53) )
    __linkproc__ LStrCat3(&dword_597D10, (__int64 *)dword_597D08, v233[0]);
  else
    __linkproc__ LStrAsg(&dword_597D10, (__int32)"curl.exe");
  __linkproc__ LStrAsg(&dword_59847C, (__int32)"Add new switches here");
  __linkproc__ LStrAsg(&dword_598404, (__int32)"Discover only the part of the map under this switch");
  __linkproc__ LStrAsg(&dword_598408, (__int32)"Delete from the map");
  __linkproc__ LStrAsg(&dword_5983DC, (__int32)"is absent from the map");
  __linkproc__ LStrAsg(&dword_5988AC, (__int32)"Switch List");
  __linkproc__ LStrAsg(&dword_5988B0, (__int32)"Switch connection table");
  __linkproc__ LStrAsg(&dword_5988B4, (__int32)"Port List");
  __linkproc__ LStrAsg(&dword_5988B8, (__int32)"VLAN List");
  __linkproc__ LStrAsg(&dword_59839C, (__int32)"Edit this Menu");
  __linkproc__ LStrAsg(&dword_5984D0, (__int32)"Do not notify when ping fails");
  __linkproc__ LStrAsg(&dword_5984D4, (__int32)"Notify when ping fails");
  __linkproc__ LStrAsg(&dword_598418, (__int32)"Set the value of an SNMP object");
  __linkproc__ LStrAsg(&dword_598458, (__int32)"Change icon");
  __linkproc__ LStrAsg(&dword_5984BC, (__int32)"Add/Edit comment");
  __linkproc__ LStrAsg(&dword_598508, (__int32)"Add to monitor list");
  __linkproc__ LStrAsg(&dword_59850C, (__int32)"Remove from monitor list");
  __linkproc__ LStrAsg(&dword_5984E8, (__int32)"Get FDB");
  *(_BYTE *)(*(_DWORD *)(v236 + 884) + 576) = 1;
  TControl::SetVisible(*(_DWORD *)(v236 + 1436), 1u);
  TControl::SetVisible(*(_DWORD *)(v236 + 1440), 0);
  TControl::SetHeight(*(_DWORD *)(v236 + 992), 55);
  LODWORD(v50) = &stru_59B818;
  WSAStartup(0x101u, (LPWSADATA)v50);
  *(_DWORD *)(*off_592C9C[0] + 116) = 60000;
  dword_597E9C = 0;
  __writefsdword(0, HIDWORD(v50));
  v52 = (int)&loc_559AB3;
  __linkproc__ LStrArrayClr((int)&v53, 4);
  __linkproc__ WStrClr(&v57);
  __linkproc__ LStrClr(&v58);
  __linkproc__ WStrClr(&v59);
  __linkproc__ LStrArrayClr((int)&v60, 9);
  __linkproc__ IntfClear(&v69);
  __linkproc__ LStrArrayClr((int)&v70, 83);
  __linkproc__ LStrArrayClr((int)&v153, 54);
  __linkproc__ FinalizeRecord((int)v207, (int)&byte_408C5C);
  __linkproc__ LStrClr(&v212);
  __linkproc__ LStrClr(&v214);
  __linkproc__ LStrClr(&v216);
  __linkproc__ LStrClr(&v218);
  __linkproc__ LStrClr(&v220);
  __linkproc__ LStrClr(&v222);
  return __linkproc__ LStrArrayClr((int)v231, 7);
}
