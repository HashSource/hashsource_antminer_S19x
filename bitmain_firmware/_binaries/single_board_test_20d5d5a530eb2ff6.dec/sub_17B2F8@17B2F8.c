int __fastcall sub_17B2F8(
        char *a1,
        size_t a2,
        int a3,
        unsigned int a4,
        int a5,
        _DWORD *a6,
        unsigned int a7,
        _DWORD *a8)
{
  int v13; // r0
  int *v14; // r6
  bool v15; // cc
  int v16; // r1
  _DWORD *v17; // r2
  int v18; // r3
  unsigned __int8 *v19; // r4
  int v20; // r4
  int v21; // r4
  int v22; // r4
  unsigned __int8 *v23; // r11
  unsigned int v24; // r4
  unsigned int v25; // r3
  int v26; // [sp+Ch] [bp-98h]
  unsigned int n; // [sp+10h] [bp-94h]
  unsigned __int8 *v28; // [sp+20h] [bp-84h]
  unsigned __int8 *v29; // [sp+24h] [bp-80h]
  unsigned __int8 *v30; // [sp+2Ch] [bp-78h] BYREF
  unsigned __int8 *v31; // [sp+30h] [bp-74h] BYREF
  int v32; // [sp+34h] [bp-70h] BYREF
  int v33; // [sp+38h] [bp-6Ch] BYREF
  int v34; // [sp+3Ch] [bp-68h] BYREF
  _DWORD v35[2]; // [sp+40h] [bp-64h] BYREF
  _DWORD v36[2]; // [sp+48h] [bp-5Ch] BYREF
  _DWORD v37[4]; // [sp+50h] [bp-54h] BYREF
  _DWORD v38[16]; // [sp+60h] [bp-44h] BYREF

  v30 = 0;
  if ( a4 > 0x40000000 )
    return 0;
  v13 = sub_D14F4();
  v14 = (int *)v13;
  if ( !v13 )
    return 0;
  n = sub_D8C78((int)a8);
  v15 = a2 > 0x40000000;
  if ( a2 <= 0x40000000 )
    v15 = a7 > 0x40000000;
  v16 = v15;
  if ( !v15 )
  {
    v37[3] = v16;
    v37[0] = 4;
    v37[2] = byte_220264;
    v36[1] = v37;
    v35[1] = v36;
    v17 = a6;
    v35[0] = a5;
    v37[1] = 4;
    v36[0] = 4;
    if ( a6 )
    {
      v38[1] = 4;
      v38[3] = v16;
      v38[2] = a6;
      v38[0] = a7;
      v17 = v38;
    }
    v18 = sub_13781C(&v30, (size_t)v35, (size_t)v17, a2);
    v26 = v18;
    if ( v18 > 0 )
    {
      v19 = v30;
      v31 = v30;
      if ( (sub_ADD48(&v31, &v34, &v32, &v33, v18) & 0x80) == 0 && v32 == 16 && !v33 )
      {
        v28 = v31;
        v21 = v26 - (v31 - v19);
        if ( (sub_ADD48(&v31, &v34, &v32, &v33, v21) & 0x80) == 0 && v32 == 16 && !v33 )
        {
          v29 = v31;
          v22 = v21 - (v31 - v28);
          if ( (sub_ADD48(&v31, &v34, &v32, &v33, v22) & 0x80) == 0 && v32 == 6 && !v33 )
          {
            v31 += v34;
            if ( (sub_ADD48(&v31, &v34, &v32, &v33, v22 - (v31 - v29)) & 0x80) == 0 && v32 == 4 && !v33 )
            {
              v23 = v31;
              if ( !sub_BC33C(v31, byte_220264, 4) )
              {
                v24 = 1;
                while ( sub_D1520(v14, a8, 0) )
                {
                  if ( !sub_D16D8((int)v14, a3, a4) )
                    break;
                  v25 = HIBYTE(v24);
                  v23[3] = v24;
                  v23[2] = BYTE1(v24);
                  v23[1] = BYTE2(v24);
                  ++v24;
                  *v23 = v25;
                  if ( !sub_D16D8((int)v14, (int)v30, v26) )
                    break;
                  if ( a2 < n )
                  {
                    if ( !sub_D1734(v14, (int)v38, 0) )
                      break;
                    memcpy(a1, v38, a2);
                    sub_E07F8(v38, n);
LABEL_39:
                    v20 = 1;
                    goto LABEL_17;
                  }
                  if ( !sub_D1734(v14, (int)a1, 0) )
                    break;
                  a2 -= n;
                  a1 += n;
                  if ( !a2 )
                    goto LABEL_39;
                }
              }
            }
          }
        }
      }
    }
  }
  v20 = 0;
LABEL_17:
  CRYPTO_free(v30);
  sub_D1504(v14);
  return v20;
}
