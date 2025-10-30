int __fastcall sub_B1D60(int *a1, int a2)
{
  int v2; // r3
  int *v4; // r6
  int (__fastcall *v5)(_DWORD, int *, int); // r7
  int *v6; // r2
  int v7; // r3
  int v8; // r1
  int v9; // r2
  int v10; // r0
  int (__fastcall *v12)(int *, int); // r3
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r8
  _DWORD *v18; // r5
  int *v19; // r3
  int v20; // r0
  int v21; // r1
  int v22; // r0
  int v23; // r0
  int *v24; // [sp+Ch] [bp-10h]
  _DWORD v25[2]; // [sp+14h] [bp-8h] BYREF

  v2 = *(_DWORD *)(a2 + 16);
  v4 = a1;
  if ( !v2 || (v5 = *(int (__fastcall **)(_DWORD, int *, int))(v2 + 16)) == 0 )
  {
    switch ( *(_BYTE *)a2 )
    {
      case 0:
LABEL_4:
        v6 = *(int **)(a2 + 8);
        if ( v6 )
        {
          v7 = *v6;
          v8 = v6[4];
          v9 = *v6 & 0x1000;
          if ( v9 )
          {
            v25[0] = a1;
            v4 = v25;
          }
          v10 = v7 & 1;
          if ( (v7 & 1) != 0 )
          {
            if ( (v7 & 0x306) != 0 )
              *v4 = 0;
            else
              sub_B19F4(v4, v8);
            return 1;
          }
          if ( (v7 & 0x300) != 0 )
          {
LABEL_50:
            *v4 = v10;
            return 1;
          }
          if ( (v7 & 6) != 0 )
          {
            v10 = sub_10BFCC(0);
            if ( v10 )
              goto LABEL_50;
            sub_D0048(13, 133, 65, "crypto/asn1/tasn_new.c", 231);
LABEL_13:
            sub_D0048(13, 121, 65, "crypto/asn1/tasn_new.c", 152);
            return 0;
          }
          if ( !sub_B1A50(v4, v8, v9) )
            goto LABEL_13;
        }
        else if ( !sub_B1850(a1, a2, 0) )
        {
          goto LABEL_13;
        }
        return 1;
      case 1:
      case 6:
        v5 = 0;
LABEL_29:
        v16 = sub_E0740(*(_DWORD *)(a2 + 20), "crypto/asn1/tasn_new.c", 122);
        *v4 = v16;
        if ( !v16 )
          goto LABEL_13;
        if ( sub_B25B0(v4, 0, a2) < 0 )
        {
          CRYPTO_free(*v4, "crypto/asn1/tasn_new.c", 129);
          *v4 = 0;
          goto LABEL_13;
        }
        sub_B2664(v4, a2);
        if ( *(int *)(a2 + 12) <= 0 )
          goto LABEL_56;
        v17 = 0;
        v18 = (_DWORD *)(*(_DWORD *)(a2 + 8) + 60);
        do
        {
          v19 = (int *)sub_B27A4(v4, v18 - 15);
          v20 = *(v18 - 15);
          __pld(v18);
          v21 = *(v18 - 11);
          if ( (v20 & 0x1000) != 0 )
          {
            v25[0] = v19;
            v19 = v25;
          }
          if ( (v20 & 1) != 0 )
          {
            if ( (v20 & 0x306) != 0 )
              *v19 = 0;
            else
              sub_B19F4(v19, v21);
          }
          else if ( (v20 & 0x300) != 0 )
          {
            *v19 = v20 & 1;
          }
          else if ( (v20 & 6) != 0 )
          {
            v24 = v19;
            v22 = sub_10BFCC(v20);
            if ( !v22 )
            {
              sub_D0048(13, 133, 65, "crypto/asn1/tasn_new.c", 231);
LABEL_53:
              sub_B15B0((int)v4, a2, 0);
              goto LABEL_13;
            }
            *v24 = v22;
          }
          else if ( !sub_B1A50(v19, v21, v20 & 0x1000) )
          {
            goto LABEL_53;
          }
          ++v17;
          v18 += 5;
        }
        while ( v17 < *(_DWORD *)(a2 + 12) );
LABEL_56:
        if ( !v5 )
          return 1;
        goto LABEL_22;
      case 2:
        v23 = sub_E0740(*(_DWORD *)(a2 + 20), "crypto/asn1/tasn_new.c", 97);
        *v4 = v23;
        if ( !v23 )
          goto LABEL_13;
        sub_B25A0(v4, -1, a2);
        return 1;
      case 4:
        if ( !v2 )
          return 1;
LABEL_15:
        v12 = *(int (__fastcall **)(int *, int))(v2 + 4);
        if ( v12 && !v12(a1, a2) )
          goto LABEL_13;
        return 1;
      case 5:
LABEL_12:
        if ( sub_B1850(a1, a2, 0) )
          return 1;
        goto LABEL_13;
      default:
        return 1;
    }
  }
  switch ( *(_BYTE *)a2 )
  {
    case 0:
      goto LABEL_4;
    case 1:
    case 6:
      v15 = v5(0, a1, a2);
      if ( !v15 )
        goto LABEL_24;
      if ( v15 == 2 )
        return 1;
      goto LABEL_29;
    case 2:
      v13 = v5(0, a1, a2);
      if ( !v13 )
        goto LABEL_24;
      if ( v13 == 2 )
        return 1;
      v14 = sub_E0740(*(_DWORD *)(a2 + 20), "crypto/asn1/tasn_new.c", 97);
      *v4 = v14;
      if ( !v14 )
        goto LABEL_13;
      sub_B25A0(v4, -1, a2);
      break;
    case 4:
      goto LABEL_15;
    case 5:
      goto LABEL_12;
    default:
      return 1;
  }
LABEL_22:
  if ( ((int (__fastcall *)(int, int *, int, _DWORD))v5)(1, v4, a2, 0) )
    return 1;
  sub_B15B0((int)v4, a2, 0);
LABEL_24:
  sub_D0048(13, 121, 100, "crypto/asn1/tasn_new.c", 161);
  return 0;
}
