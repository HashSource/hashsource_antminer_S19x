int __fastcall sub_F1548(int a1, int a2)
{
  int v2; // r5
  int v3; // r6
  int v4; // r7
  int v5; // r8
  int v6; // r9
  int v7; // r2
  int v9; // r0
  int result; // r0
  int v11; // r0
  int v12; // lr
  __int64 v13; // r0
  int v14; // lr
  __int64 v15; // kr00_8
  int v16; // r2
  int v17; // r5
  int v18; // r6
  char *v19; // r3
  int v20; // r1
  int v21; // r3
  unsigned int v22; // r2
  int v23; // r3
  int v24; // r12
  int v25; // r1
  int v26; // r3
  int v27; // r1
  int v28; // r5
  int v29; // r0
  const char *v30; // r0
  int v31; // [sp+14h] [bp-44h] BYREF
  _DWORD v32[9]; // [sp+18h] [bp-40h] BYREF
  int v33; // [sp+3Ch] [bp-1Ch]
  int v34; // [sp+40h] [bp-18h]
  int v35; // [sp+44h] [bp-14h]
  int v36; // [sp+4Ch] [bp-Ch] BYREF
  _DWORD v37[2]; // [sp+50h] [bp-8h] BYREF

  v7 = *(_DWORD *)(a1 + 20);
  v9 = *(_DWORD *)(a2 + 36);
  v37[0] = v7;
  v36 = 0;
  v37[1] = &v36;
  sub_2ADCFC(v9, sub_F1320, v37);
  if ( v36 )
    return sub_162FDC(*(_DWORD *)(a2 + 36), v36);
  result = *(_DWORD *)(a2 + 152);
  if ( result == -1 )
  {
    v11 = sub_94700((int)"coffread.c", 308, "sect_index_text not initialized");
    v34 = a2;
    v35 = v12;
    dword_478964 = dword_4789C8;
    if ( v11 != -1 )
    {
      sub_E7454(dword_4789CC, v11);
      return sub_E6538(0);
    }
    v13 = sub_94700((int)"coffread.c", 425, "sect_index_text not initialized", &dword_4789AC, v34, v35);
    v32[3] = a2;
    v32[4] = v2;
    v32[5] = v3;
    v32[6] = v4;
    v32[7] = v5;
    v32[8] = v6;
    v33 = v14;
    v15 = v13;
    v17 = v16;
    HIDWORD(v13) = dword_4789E0;
    *(_DWORD *)(v13 + 4) = dword_478988;
    if ( dword_4789E0 == sub_2A87D8(dword_4789E4, HIDWORD(v13), dword_4789DC) )
    {
      (*(void (**)(void))(*(_DWORD *)(*(_DWORD *)(dword_4789E8 + 4) + 444) + 4))();
      v18 = *(unsigned __int8 *)(HIDWORD(v15) + 21);
      *(_DWORD *)(v15 + 8) = v18;
      if ( !v18 )
        goto LABEL_9;
      if ( dword_4789EC == sub_2A87D8(dword_4789F0, dword_4789EC, dword_4789DC) )
      {
        (**(void (__fastcall ***)(int, int, _DWORD, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)(dword_4789E8 + 4) + 444))(
          dword_4789E8,
          dword_4789F0,
          *(unsigned __int16 *)(HIDWORD(v15) + 18),
          *(unsigned __int8 *)(HIDWORD(v15) + 20),
          0,
          *(_DWORD *)(v15 + 8),
          v17);
        v18 = *(_DWORD *)(v15 + 8);
        if ( v18 <= 1 )
        {
LABEL_9:
          if ( *(_DWORD *)HIDWORD(v15) )
          {
            strncpy(dest, (const char *)HIDWORD(v15), 8u);
            v19 = dest;
            byte_4789D8 = 0;
          }
          else
          {
            v19 = (char *)(dword_4789B0 + *(_DWORD *)(HIDWORD(v15) + 4));
          }
          *(_DWORD *)v15 = v19;
          v20 = dword_4789F8;
          v21 = dword_4789F4;
          *(_DWORD *)(v15 + 12) = *(_DWORD *)(HIDWORD(v15) + 8);
          v22 = *(unsigned __int8 *)(HIDWORD(v15) + 20);
          v23 = v21 | v20;
          *(_DWORD *)(v15 + 16) = v22;
          v24 = *(_DWORD *)(HIDWORD(v15) + 12);
          *(_DWORD *)(v15 + 20) = v24;
          v25 = *(unsigned __int16 *)(HIDWORD(v15) + 18);
          *(_DWORD *)(v15 + 24) = v25;
          if ( (v23 & v25) == 0 )
            *(_DWORD *)(v15 + 24) = 0;
          dword_478988 += 1 + v18;
          if ( dword_4789FC )
          {
            if ( v22 > 0x69 )
            {
              if ( v22 != 134 )
              {
                if ( v22 <= 0x86 )
                {
                  if ( v22 - 130 > 1 )
                    goto LABEL_19;
                }
                else if ( v22 < 0x96 || v22 > 0x97 && v22 != 255 )
                {
                  goto LABEL_19;
                }
              }
            }
            else if ( v22 < 0x68 && v22 != 6 )
            {
              if ( v22 <= 6 )
              {
                if ( v22 - 2 > 1 )
                  goto LABEL_19;
              }
              else if ( v22 - 100 > 1 )
              {
                goto LABEL_19;
              }
            }
            if ( v24 )
            {
              v32[1] = &v31;
              v32[0] = v24;
              v31 = 0;
              sub_2ADCFC(dword_4789E8, sub_F1320, v32);
              v26 = v31;
              if ( v31 )
                v26 = *(_DWORD *)(v31 + 28);
              *(_DWORD *)(v15 + 12) += v26;
              __asm { POP             {R4-R9,PC} }
            }
          }
LABEL_19:
          __asm { POP             {R4-R9,PC} }
        }
        v27 = dword_4789EC;
        v28 = 1;
        while ( 1 )
        {
          v29 = sub_2A87D8(dword_4789F0, v27, dword_4789DC);
          v27 = dword_4789EC;
          if ( dword_4789EC != v29 )
            break;
          v18 = *(_DWORD *)(v15 + 8);
          if ( v18 <= ++v28 )
            goto LABEL_9;
        }
      }
    }
    v30 = (const char *)sub_1B87A8(dword_4789C0);
    sub_946E0("%s: error reading symbols", v30);
  }
  return result;
}
