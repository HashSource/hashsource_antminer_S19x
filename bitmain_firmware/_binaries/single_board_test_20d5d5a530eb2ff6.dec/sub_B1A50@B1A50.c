int __fastcall sub_B1A50(int *a1, int a2, int a3)
{
  int v3; // r3
  int *v5; // r6
  int (__fastcall *v7)(_DWORD, int *, int); // r7
  int *v8; // r2
  int v9; // r3
  int v10; // r1
  int v11; // r2
  int v12; // r0
  int (__fastcall *v14)(int *, int); // r3
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r8
  _DWORD *v20; // r5
  int *v21; // r3
  int v22; // r0
  int v23; // r1
  int v24; // r0
  int *v25; // [sp+Ch] [bp-10h]
  _DWORD v26[2]; // [sp+14h] [bp-8h] BYREF

  v3 = *(_DWORD *)(a2 + 16);
  v5 = a1;
  if ( v3 )
  {
    v7 = *(int (__fastcall **)(_DWORD, int *, int))(v3 + 16);
    if ( v7 )
    {
      switch ( *(_BYTE *)a2 )
      {
        case 0:
          goto LABEL_4;
        case 1:
        case 6:
          v17 = v7(0, a1, a2);
          if ( !v17 )
            goto LABEL_23;
          if ( v17 != 2 )
            goto LABEL_26;
          return 1;
        case 2:
          v15 = v7(0, a1, a2);
          if ( !v15 )
            goto LABEL_23;
          if ( v15 != 2 )
            goto LABEL_18;
          return 1;
        case 4:
          goto LABEL_13;
        case 5:
          goto LABEL_11;
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
LABEL_26:
        if ( !a3 )
          goto LABEL_27;
        goto LABEL_50;
      case 2:
LABEL_18:
        if ( !a3 )
          goto LABEL_19;
        goto LABEL_49;
      case 4:
LABEL_13:
        v14 = *(int (__fastcall **)(int *, int))(v3 + 4);
        if ( v14 && !v14(a1, a2) )
          goto LABEL_12;
        return 1;
      case 5:
        goto LABEL_11;
      default:
        return 1;
    }
  }
  switch ( *(_BYTE *)a2 )
  {
    case 0:
LABEL_4:
      v8 = *(int **)(a2 + 8);
      if ( !v8 )
        goto LABEL_11;
      v9 = *v8;
      v10 = v8[4];
      v11 = *v8 & 0x1000;
      if ( v11 )
      {
        v26[0] = a1;
        v5 = v26;
      }
      v12 = v9 & 1;
      if ( (v9 & 1) != 0 )
      {
        if ( (v9 & 0x306) != 0 )
          *v5 = 0;
        else
          sub_B19F4(v5, v10);
        return 1;
      }
      if ( (v9 & 0x300) != 0 )
        goto LABEL_48;
      if ( (v9 & 6) != 0 )
      {
        v12 = sub_10BFCC(0);
        if ( v12 )
        {
LABEL_48:
          *v5 = v12;
          return 1;
        }
        sub_D0048(13, 133, 65, "crypto/asn1/tasn_new.c", 231);
      }
      else if ( sub_B1A50(v5, v10, v11) )
      {
        return 1;
      }
LABEL_12:
      sub_D0048(13, 121, 65, "crypto/asn1/tasn_new.c", 152);
      return 0;
    case 1:
    case 6:
      v7 = 0;
      if ( a3 )
      {
LABEL_50:
        memset((void *)*v5, 0, *(_DWORD *)(a2 + 20));
        if ( sub_B25B0(v5, 0, a2) < 0 )
          goto LABEL_12;
      }
      else
      {
LABEL_27:
        v18 = sub_E0740(*(_DWORD *)(a2 + 20), "crypto/asn1/tasn_new.c", 122);
        *v5 = v18;
        if ( !v18 )
          goto LABEL_12;
        if ( sub_B25B0(v5, a3, a2) < 0 )
        {
          CRYPTO_free(*v5, "crypto/asn1/tasn_new.c", 129);
          *v5 = a3;
          goto LABEL_12;
        }
      }
      sub_B2664(v5, a2);
      if ( *(int *)(a2 + 12) > 0 )
      {
        v19 = 0;
        v20 = (_DWORD *)(*(_DWORD *)(a2 + 8) + 60);
        do
        {
          v21 = (int *)sub_B27A4(v5, v20 - 15);
          v22 = *(v20 - 15);
          __pld(v20);
          v23 = *(v20 - 11);
          if ( (v22 & 0x1000) != 0 )
          {
            v26[0] = v21;
            v21 = v26;
          }
          if ( (v22 & 1) != 0 )
          {
            if ( (v22 & 0x306) != 0 )
              *v21 = 0;
            else
              sub_B19F4(v21, v23);
          }
          else if ( (v22 & 0x300) != 0 )
          {
            *v21 = v22 & 1;
          }
          else if ( (v22 & 6) != 0 )
          {
            v25 = v21;
            v24 = sub_10BFCC(v22);
            if ( !v24 )
            {
              sub_D0048(13, 133, 65, "crypto/asn1/tasn_new.c", 231);
LABEL_57:
              sub_B15B0((int)v5, a2, a3);
              goto LABEL_12;
            }
            *v25 = v24;
          }
          else if ( !sub_B1A50(v21, v23, v22 & 0x1000) )
          {
            goto LABEL_57;
          }
          ++v19;
          v20 += 5;
        }
        while ( *(_DWORD *)(a2 + 12) > v19 );
      }
      if ( !v7 )
        return 1;
LABEL_21:
      if ( ((int (__fastcall *)(int, int *, int, _DWORD))v7)(1, v5, a2, 0) )
        return 1;
      sub_B15B0((int)v5, a2, a3);
LABEL_23:
      sub_D0048(13, 121, 100, "crypto/asn1/tasn_new.c", 161);
      return 0;
    case 2:
      v7 = 0;
      if ( a3 )
      {
LABEL_49:
        memset((void *)*v5, 0, *(_DWORD *)(a2 + 20));
      }
      else
      {
LABEL_19:
        v16 = sub_E0740(*(_DWORD *)(a2 + 20), "crypto/asn1/tasn_new.c", 97);
        *v5 = v16;
        if ( !v16 )
          goto LABEL_12;
      }
      sub_B25A0(v5, -1, a2);
      if ( v7 )
        goto LABEL_21;
      return 1;
    case 5:
LABEL_11:
      if ( !sub_B1850(a1, a2, a3) )
        goto LABEL_12;
      return 1;
    default:
      return 1;
  }
}
