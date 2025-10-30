int __fastcall sub_B0D50(size_t **a1, _BYTE **a2, unsigned __int8 *a3, int a4, int a5)
{
  int v6; // r2
  int v9; // r8
  int v10; // r1
  int (__fastcall *v11)(int, size_t **, unsigned __int8 *, _DWORD); // r10
  int v12; // r2
  int result; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r3
  int v17; // r6
  int v18; // r7
  int v19; // r0
  int v20; // r2
  int v21; // r3
  int v22; // r0
  int v23; // r8
  int v24; // r4
  int v25; // r0
  int v26; // r2
  int v27; // r1
  int v28; // r0
  bool v29; // zf
  int v30; // r7
  int v31; // r6
  int v32; // r8
  int v33; // r0
  int v34; // r0
  int v35; // r7
  char v36; // [sp+0h] [bp-24h]
  int v37; // [sp+Ch] [bp-18h]
  int v38; // [sp+Ch] [bp-18h]
  int v39; // [sp+10h] [bp-14h]
  int v40; // [sp+14h] [bp-10h]
  int v41; // [sp+1Ch] [bp-8h] BYREF

  v6 = *a3;
  v9 = a4;
  v10 = *((_DWORD *)a3 + 4);
  if ( v6 )
  {
    if ( !*a1 )
      return 0;
    v11 = (int (__fastcall *)(int, size_t **, unsigned __int8 *, _DWORD))*((_DWORD *)a3 + 4);
    if ( !v10 )
    {
LABEL_5:
      switch ( v6 )
      {
        case 0:
          goto LABEL_7;
        case 1:
          v39 = 1;
          goto LABEL_18;
        case 2:
          if ( a4 != -1 )
          {
            v26 = 122;
LABEL_44:
            sub_D0048(13, 144, 230, "crypto/asn1/tasn_enc.c", v26);
            return -1;
          }
          if ( v11 )
          {
            if ( !v11(6, a1, a3, 0) )
              return 0;
            v14 = sub_B2598(a1, a3);
            if ( v14 < 0 || *((_DWORD *)a3 + 3) <= v14 )
            {
              v11(7, a1, a3, 0);
              return 0;
            }
            goto LABEL_42;
          }
          v14 = sub_B2598(a1, a3);
          if ( v14 >= 0 && v14 < *((_DWORD *)a3 + 3) )
          {
LABEL_42:
            v24 = *((_DWORD *)a3 + 2) + 20 * v14;
            v25 = sub_B27A4(a1, v24);
            return sub_B1068(v25, a2, v24, -1, a5);
          }
          break;
        case 4:
          return (*(int (__fastcall **)(size_t **, _BYTE **, unsigned __int8 *, int, int))(v10 + 20))(
                   a1,
                   a2,
                   a3,
                   a4,
                   a5);
        case 5:
          if ( a4 == -1 )
          {
            v36 = a5;
            a4 = -1;
            return sub_B0A68(a1, a2, a3, a4, v36);
          }
          v26 = 111;
          goto LABEL_44;
        case 6:
          if ( (a5 & 0x800) != 0 )
            v16 = 2;
          else
            v16 = 1;
          v39 = v16;
LABEL_18:
          v15 = sub_B274C(&v41, a2, a1, a3);
          v37 = v15;
          if ( v15 < 0 )
            return 0;
          if ( v15 )
            return v41;
          v41 = 0;
          if ( v9 == -1 )
          {
            v9 = 16;
            a5 &= 0xFFFFFF3F;
          }
          if ( v11 && !v11(6, a1, a3, 0) )
            return 0;
          v17 = *((_DWORD *)a3 + 2);
          if ( *((int *)a3 + 3) <= 0 )
          {
            v27 = v41;
          }
          else
          {
            v18 = v37;
            v40 = v9;
            do
            {
              ++v18;
              v22 = sub_B27AC(a1, v17, 1);
              v17 += 20;
              v23 = v22;
              if ( !v22 )
                return 0;
              v19 = sub_B27A4(a1, v22);
              result = sub_B1068(v19, 0, v23, -1, a5);
              if ( result == -1 )
                return result;
              v20 = v41 + result;
              if ( 0x7FFFFFFF - v41 < result )
                return -1;
              v21 = *((_DWORD *)a3 + 3);
              v41 += result;
            }
            while ( v21 > v18 );
            v9 = v40;
            v27 = v20;
          }
          v28 = sub_AE038(v39, v27, v9);
          v29 = v28 == -1;
          if ( v28 != -1 )
            v29 = a2 == 0;
          v30 = v28;
          if ( v29 )
            return v30;
          sub_ADE9C(a2, v39, v41, v9, a5);
          v31 = *((_DWORD *)a3 + 2);
          if ( *((int *)a3 + 3) > 0 )
          {
            v32 = v37;
            v38 = v30;
            do
            {
              ++v32;
              v34 = sub_B27AC(a1, v31, 1);
              v31 += 20;
              v35 = v34;
              if ( !v34 )
                return 0;
              v33 = sub_B27A4(a1, v34);
              sub_B1068(v33, a2, v35, -1, a5);
            }
            while ( *((_DWORD *)a3 + 3) > v32 );
            v30 = v38;
          }
          if ( v39 == 2 )
            sub_AE020(a2);
          if ( !v11 )
            return v30;
          if ( v11(7, a1, a3, 0) )
            return v30;
          return 0;
        default:
          return 0;
      }
      return 0;
    }
LABEL_4:
    v11 = *(int (__fastcall **)(int, size_t **, unsigned __int8 *, _DWORD))(v10 + 16);
    goto LABEL_5;
  }
  if ( v10 )
    goto LABEL_4;
LABEL_7:
  v12 = *((_DWORD *)a3 + 2);
  v36 = a5;
  if ( v12 )
    return sub_B1068(a1, a2, v12, a4, a5);
  else
    return sub_B0A68(a1, a2, a3, a4, v36);
}
