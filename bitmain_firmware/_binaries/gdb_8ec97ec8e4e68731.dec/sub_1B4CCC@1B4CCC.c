int __fastcall sub_1B4CCC(int a1, unsigned int a2, int a3)
{
  int v6; // r5
  __int64 v7; // r0
  int v8; // r4
  unsigned int v9; // r8
  int v10; // r0
  __int64 v11; // r0
  unsigned int v12; // r10
  unsigned int v13; // r4
  unsigned int v14; // r6
  int v15; // r0
  __int64 v16; // r0
  int v17; // r11
  __int64 v18; // r0
  int v19; // lr
  int *v20; // r8
  int v21; // r5
  int v22; // r4
  int v23; // r0
  int v24; // r6
  unsigned int v25; // r7
  int v26; // r5
  int v27; // r0
  int v29; // [sp+0h] [bp-3Ch] BYREF
  int v30; // [sp+4h] [bp-38h]
  unsigned int v31; // [sp+8h] [bp-34h]
  int v32; // [sp+Ch] [bp-30h]
  unsigned int v33; // [sp+10h] [bp-2Ch]
  int v34; // [sp+14h] [bp-28h]
  unsigned int v35; // [sp+18h] [bp-24h]
  int v36; // [sp+1Ch] [bp-20h]
  unsigned int v37; // [sp+2Ch] [bp-10h]
  int v38; // [sp+30h] [bp-Ch]
  unsigned int v39; // [sp+34h] [bp-8h]

  v38 = ((int (*)(void))loc_165BB8)();
  if ( a2 )
  {
    while ( 2 )
    {
      v6 = ((int (__fastcall *)(int))loc_165BB8)(a1);
      sub_FA95C(a2, 4, v6);
      v39 = sub_FA95C(a2 + 4, 4, v6);
      sub_FA95C(a2 + 8, 4, v6);
      sub_FA95C(a2 + 12, 4, v6);
      sub_FA95C(a2 + 16, 4, v6);
      sub_FA95C(a2 + 18, 4, v6);
      sub_FA95C(a2 + 24, 4, v6);
      v37 = sub_FA95C(a2 + 28, 4, v6);
      sub_FA95C(a2 + 32, 4, v6);
      sub_FA95C(a2 + 36, 4, v6);
      while ( 1 )
      {
        v7 = sub_FA95C(v37, 4, v38);
        v8 = v7;
        if ( !(_DWORD)v7 )
          break;
        v9 = v7 + 4;
        v10 = ((int (__fastcall *)(int, _DWORD))loc_165BB8)(a1, HIDWORD(v7));
        v11 = sub_FA95C(v8 + 4, 4, v10);
        v12 = v11;
        if ( (_DWORD)v11 )
        {
          v13 = v8 + 8;
          v14 = 0;
          do
          {
            v15 = ((int (__fastcall *)(int, _DWORD))loc_165BB8)(a1, HIDWORD(v11));
            v16 = sub_FA95C(v9, 4, v15);
            if ( v14 >= (unsigned int)v16 )
            {
              v18 = sub_94700(
                      (int)"objc-lang.c",
                      1394,
                      "%s: Assertion `%s' failed.",
                      "void read_objc_methlist_method(gdbarch*, CORE_ADDR, long unsigned int, objc_method*)",
                      "num < read_objc_methlist_nmethods (gdbarch, addr)");
              v31 = v13;
              v32 = v6;
              v33 = v14;
              v34 = a1;
              v35 = v9;
              v36 = v19;
              v20 = (int *)HIDWORD(v18);
              v21 = sub_15F70C(v18);
              v22 = sub_15ECB4(v21);
              sub_1780B4();
              v24 = *(_DWORD *)(v23 + 156);
              v25 = ((int (__fastcall *)(int, int, int, int))loc_16B0A4)(v22, v21, 1, v24);
              v26 = ((int (__fastcall *)(int, int, int, int))loc_16B0A4)(v22, v21, 2, v24);
              sub_1B4194(v22, v25, &v29);
              if ( v30 )
              {
                v27 = sub_1B4CCC(v22, v30, v26);
                if ( v20 )
                  *v20 = v27;
              }
              __asm { POP             {R4-R8,PC} }
            }
            v6 = ((int (__fastcall *)(int, _DWORD))loc_165BB8)(a1, HIDWORD(v16));
            v17 = sub_FA95C(v13, 4, v6);
            sub_FA95C(v13 + 4, 4, v6);
            v11 = sub_FA95C(v13 + 8, 4, v6);
            if ( a3 == v17 )
              return v11;
            ++v14;
            v13 += 12;
          }
          while ( v14 < v12 );
        }
        v37 += 4;
      }
      a2 = v39;
      if ( v39 )
        continue;
      break;
    }
  }
  LODWORD(v11) = 0;
  return v11;
}
