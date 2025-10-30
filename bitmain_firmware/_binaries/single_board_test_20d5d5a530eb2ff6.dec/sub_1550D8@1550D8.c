int *__fastcall sub_1550D8(int a1, int a2, int a3, int a4, int a5, char a6, int a7, unsigned int a8)
{
  int *v10; // r5
  _BYTE *v11; // r6
  int *result; // r0
  int *v13; // r4
  _DWORD *v14; // r0
  int v15; // r4
  _DWORD *v16; // r0
  size_t v17; // r0
  int v18; // r4
  _DWORD *v19; // r0
  size_t v20; // r0
  char *v21; // r4
  int v22; // r4
  int v23; // lr
  int v24; // r0
  int v25; // r1
  int v26; // r2
  int v27; // r3
  int v28; // r1
  char v29; // r3
  int v30; // r0
  char *v31; // r6
  int v32[3]; // [sp+0h] [bp-110h] BYREF
  int v33; // [sp+114h] [bp+4h]
  _BYTE *v34; // [sp+118h] [bp+8h]
  _BYTE *v35; // [sp+11Ch] [bp+Ch]
  char *v36; // [sp+120h] [bp+10h]
  int v37; // [sp+124h] [bp+14h]
  int v38; // [sp+12Ch] [bp+1Ch]
  _BYTE v39[56]; // [sp+130h] [bp+20h] BYREF
  _BYTE v40[56]; // [sp+168h] [bp+58h] BYREF
  char v41[56]; // [sp+1A0h] [bp+90h] BYREF
  _BYTE s[60]; // [sp+1D8h] [bp+C8h] BYREF
  char v43[55]; // [sp+214h] [bp+104h] BYREF
  char v44; // [sp+24Bh] [bp+13Bh]
  char v45; // [sp+24Ch] [bp+13Ch]
  _BYTE v46[63]; // [sp+24Dh] [bp+13Dh] BYREF

  v38 = a1;
  v37 = a3;
  v10 = (int *)sub_D14F4();
  v11 = s;
  memset(s, 0, 0x39u);
  result = v10;
  if ( v10 )
  {
    v13 = (int *)sub_D14F4();
    if ( v13 )
    {
      v14 = (_DWORD *)sub_15E674();
      if ( sub_D1520(v13, v14, 0) && sub_D16D8((int)v13, a2, 57) && sub_D1748(v13, (int)v43, 114) )
      {
        v35 = v39;
        sub_D1504(v13);
        v45 = 0;
        v44 |= 0x80u;
        v43[0] &= 0xFCu;
        v36 = v41;
        sub_157850(v39, v43);
        strcpy(v41, "SigEd448");
        if ( a8 <= 0xFF
          && (v33 = (unsigned __int8)a8,
              v34 = v40,
              v40[1] = a8,
              v40[0] = a6 != 0,
              v16 = (_DWORD *)sub_15E674(),
              sub_D1520(v10, v16, 0))
          && (v17 = strlen(v36), sub_D16D8((int)v10, (int)v36, v17))
          && sub_D16D8((int)v10, (int)v34, 2)
          && sub_D16D8((int)v10, a7, a8)
          && sub_D16D8((int)v10, (int)v46, 57)
          && sub_D16D8((int)v10, a4, a5) )
        {
          sub_E07F8(v43, 0x72u);
          v15 = sub_D1748(v10, (int)v43, 114);
          if ( !v15 )
            goto LABEL_7;
          v18 = (int)v34;
          sub_157850(v34, v43);
          sub_E07F8(v43, 0x72u);
          sub_157ACC(v43, v18);
          sub_157ACC(v43, v43);
          sub_151860(v32, (int)curve448_precomputed_base, (int)v43);
          sub_153C4C((int)s, v32);
          sub_153C44(v32);
          sub_157848(v43);
          v41[0] = a6 != 0;
          v41[1] = v33;
          strcpy(v43, "SigEd448");
          v19 = (_DWORD *)sub_15E674();
          if ( sub_D1520(v10, v19, 0) )
          {
            v20 = strlen(v43);
            if ( sub_D16D8((int)v10, (int)v43, v20) )
            {
              if ( sub_D16D8((int)v10, (int)v36, 2)
                && sub_D16D8((int)v10, a7, a8)
                && sub_D16D8((int)v10, (int)s, 57)
                && sub_D16D8((int)v10, v37, 57)
                && sub_D16D8((int)v10, a4, a5)
                && sub_D1748(v10, (int)v43, 114) )
              {
                v21 = v36;
                sub_157850(v36, v43);
                sub_E07F8(v43, 0x72u);
                sub_156CA8(v21, v21, v35);
                sub_1570E8(v21, v21, v34);
                v22 = v38;
                sub_E07F8((void *)v38, 0x72u);
                v23 = v22;
                do
                {
                  v23 += 16;
                  v24 = *(_DWORD *)v11;
                  v25 = *((_DWORD *)v11 + 1);
                  v26 = *((_DWORD *)v11 + 2);
                  v27 = *((_DWORD *)v11 + 3);
                  v11 += 16;
                  *(_DWORD *)(v23 - 16) = v24;
                  *(_DWORD *)(v23 - 12) = v25;
                  *(_DWORD *)(v23 - 8) = v26;
                  *(_DWORD *)(v23 - 4) = v27;
                }
                while ( v11 != &s[48] );
                v15 = -1;
                v28 = *((_DWORD *)v11 + 1);
                v29 = v11[8];
                *(_DWORD *)v23 = *(_DWORD *)v11;
                v30 = v38;
                *(_DWORD *)(v23 + 4) = v28;
                v31 = v36;
                *(_BYTE *)(v23 + 8) = v29;
                sub_157990(v30 + 57, v31);
                sub_157848(v35);
                sub_157848(v34);
                sub_157848(v31);
                goto LABEL_7;
              }
            }
          }
        }
        else
        {
          sub_E07F8(v43, 0x72u);
        }
      }
      else
      {
        sub_D1504(v13);
      }
    }
    v15 = 0;
LABEL_7:
    sub_D1504(v10);
    return (int *)v15;
  }
  return result;
}
