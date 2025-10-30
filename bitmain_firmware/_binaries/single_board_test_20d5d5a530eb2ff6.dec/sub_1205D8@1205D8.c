int __fastcall sub_1205D8(int result)
{
  int v1; // r3
  int v2; // r5
  void *v3; // r0
  int *v4; // r0
  int *v5; // r4
  int v6; // r0
  int v7; // r0
  int v8; // r3
  _BOOL4 v9; // r3
  _DWORD *v10; // r4
  int v11; // r3
  int *v12; // r0
  int v13; // r2
  unsigned __int8 *v14; // r1
  int v15; // r3
  _DWORD *v16; // r4
  int v17; // r0
  char *v18; // r0
  _DWORD *v19; // r0
  bool v20; // cc
  unsigned int v21; // r1
  int v22; // r4
  int v23; // r1
  int v24; // r0
  int v25; // r0
  int v26; // r4
  int v27; // r0
  int v28; // r3
  int *v29; // r0
  int v30; // r2
  unsigned __int8 *v31; // r3
  int v32; // r3
  int v33; // r0
  int v34; // r0
  int v35; // r4
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // r0
  int *v41; // r0
  int *v42; // r3
  int *v43; // r6
  int v44; // r2
  int v45; // r3
  unsigned __int8 *v46; // r1
  int *v47; // r1
  int *v48; // r0
  int *v49; // r6
  int v50; // r0
  char *v51; // r0
  int v52; // r0
  signed int v53; // [sp+4h] [bp-10h]
  int j; // [sp+4h] [bp-10h]
  int v55; // [sp+8h] [bp-Ch] BYREF
  int i; // [sp+Ch] [bp-8h] BYREF

  v1 = *(_DWORD *)(result + 204);
  __dmb(0xBu);
  if ( !v1 )
  {
    v2 = result;
    sub_10C554(*(pthread_rwlock_t **)(result + 200));
    if ( (*(_DWORD *)(v2 + 128) & 0x100) != 0 )
      return sub_10C564(*(pthread_rwlock_t **)(v2 + 200));
    v3 = sub_D93D8();
    if ( !sub_1149C0(v2, v3, (_DWORD *)(v2 + 176), 0) )
      *(_DWORD *)(v2 + 128) |= 0x100080u;
    if ( !sub_10FD34((_DWORD *)v2) )
      *(_DWORD *)(v2 + 128) |= 0x40u;
    v4 = (int *)sub_10EDA8(v2);
    v5 = v4;
    if ( v4 )
    {
      if ( *v4 )
        *(_DWORD *)(v2 + 128) |= 0x10u;
      v6 = v4[1];
      if ( v6 )
      {
        if ( *(_DWORD *)(v6 + 4) == 258 )
          goto LABEL_59;
        v7 = sub_126F04(v6);
        v8 = *v5;
        *(_DWORD *)(v2 + 120) = v7;
        v9 = v8 == 0;
        if ( !v7 )
          v9 = 0;
        if ( v9 )
        {
LABEL_59:
          v28 = *(_DWORD *)(v2 + 128);
          *(_DWORD *)(v2 + 120) = 0;
          *(_DWORD *)(v2 + 128) = v28 | 0x80;
        }
      }
      else
      {
        *(_DWORD *)(v2 + 120) = -1;
      }
      sub_1707C4(v5);
      *(_DWORD *)(v2 + 128) |= 1u;
    }
    else if ( v53 != -1 )
    {
      *(_DWORD *)(v2 + 128) |= 0x80u;
    }
    v10 = (_DWORD *)sub_10EDA8(v2);
    if ( !v10 )
    {
      if ( v53 != -1 )
        *(_DWORD *)(v2 + 128) |= 0x80u;
      goto LABEL_22;
    }
    v11 = *(_DWORD *)(v2 + 128);
    if ( (v11 & 0x10) == 0 )
    {
      if ( sub_10ED70(v2) < 0 && sub_10ED70(v2) < 0 )
      {
LABEL_19:
        if ( *v10 )
          *(_DWORD *)(v2 + 124) = sub_126F04(*v10);
        else
          *(_DWORD *)(v2 + 124) = -1;
        sub_11F538((int)v10);
        *(_DWORD *)(v2 + 128) |= 0x400u;
LABEL_22:
        v12 = (int *)sub_10EDA8(v2);
        if ( v12 )
        {
          v13 = *v12;
          if ( *v12 <= 0 )
          {
            *(_DWORD *)(v2 + 132) = 0;
          }
          else
          {
            v14 = (unsigned __int8 *)v12[2];
            v15 = *v14;
            *(_DWORD *)(v2 + 132) = v15;
            if ( v13 != 1 )
              *(_DWORD *)(v2 + 132) = v15 | (v14[1] << 8);
          }
          *(_DWORD *)(v2 + 128) |= 2u;
          j_ASN1_STRING_free_0((int)v12);
        }
        else if ( v53 != -1 )
        {
          *(_DWORD *)(v2 + 128) |= 0x80u;
        }
        *(_DWORD *)(v2 + 136) = 0;
        v16 = (_DWORD *)sub_10EDA8(v2);
        if ( v16 )
        {
          v53 = 0;
          *(_DWORD *)(v2 + 128) |= 4u;
          while ( v53 < sub_10C010((int)v16) )
          {
            v17 = sub_10C01C(v16, v53);
            v18 = sub_EAC84(v17);
            if ( v18 == (char *)133 )
            {
              *(_DWORD *)(v2 + 136) |= 0x40u;
            }
            else if ( (int)v18 <= 133 )
            {
              if ( v18 == (char *)130 )
              {
                *(_DWORD *)(v2 + 136) |= 2u;
              }
              else if ( (int)v18 <= 130 )
              {
                if ( v18 == (char *)129 )
                  *(_DWORD *)(v2 + 136) |= 1u;
              }
              else if ( v18 == (char *)131 )
              {
                *(_DWORD *)(v2 + 136) |= 8u;
              }
              else
              {
                *(_DWORD *)(v2 + 136) |= 4u;
              }
            }
            else if ( v18 == (char *)180 )
            {
              *(_DWORD *)(v2 + 136) |= 0x20u;
            }
            else if ( (int)v18 <= 180 )
            {
              if ( v18 == (char *)137 || v18 == (char *)139 )
                *(_DWORD *)(v2 + 136) |= 0x10u;
            }
            else if ( v18 == (char *)297 )
            {
              *(_DWORD *)(v2 + 136) |= 0x80u;
            }
            else if ( v18 == (char *)910 )
            {
              *(_DWORD *)(v2 + 136) |= 0x100u;
            }
            ++v53;
          }
          sub_10BFDC((int)v16, (void (__fastcall *)(int))ASN1_OBJECT_free);
        }
        else if ( v53 != -1 )
        {
          *(_DWORD *)(v2 + 128) |= 0x80u;
        }
        v29 = (int *)sub_10EDA8(v2);
        if ( v29 )
        {
          v31 = (unsigned __int8 *)*v29;
          if ( *v29 <= 0 )
            v30 = 0;
          else
            v31 = (unsigned __int8 *)v29[2];
          if ( *v29 > 0 )
            v30 = *v31;
          v32 = *(_DWORD *)(v2 + 128);
          *(_DWORD *)(v2 + 140) = v30;
          *(_DWORD *)(v2 + 128) = v32 | 8;
          j_ASN1_STRING_free_0((int)v29);
        }
        else if ( v53 != -1 )
        {
          *(_DWORD *)(v2 + 128) |= 0x80u;
        }
        v33 = sub_10EDA8(v2);
        *(_DWORD *)(v2 + 144) = v33;
        if ( !v33 && v53 != -1 )
          *(_DWORD *)(v2 + 128) |= 0x80u;
        v34 = sub_10EDA8(v2);
        *(_DWORD *)(v2 + 148) = v34;
        if ( !v34 && v53 != -1 )
          *(_DWORD *)(v2 + 128) |= 0x80u;
        v35 = sub_10E660(v2);
        v36 = sub_10E65C(v2);
        if ( !sub_10E6E0(v35, v36) )
        {
          v47 = *(int **)(v2 + 148);
          *(_DWORD *)(v2 + 128) |= 0x20u;
          if ( !sub_12055C(v2, v47) )
          {
            v48 = (int *)sub_10E89C(v2);
            v49 = v48;
            if ( v48 )
            {
              v50 = sub_DA1A0(v48);
              if ( !sub_EB3A8(v50, 0, &v55) )
                v55 = sub_DA1A0(v49);
              v51 = sub_EAC84(*(_DWORD *)(v2 + 20));
              if ( sub_EB3A8((int)v51, 0, &i) )
              {
                v52 = sub_DA17C(i);
                if ( v52 == v55 )
                  *(_DWORD *)(v2 + 128) |= 0x2000u;
              }
            }
          }
        }
        v37 = sub_10EDA8(v2);
        *(_DWORD *)(v2 + 160) = v37;
        if ( !v37 && v53 != -1 )
          *(_DWORD *)(v2 + 128) |= 0x80u;
        v38 = sub_10EDA8(v2);
        *(_DWORD *)(v2 + 164) = v38;
        if ( !v38 && v53 != -1 )
          *(_DWORD *)(v2 + 128) |= 0x80u;
        v39 = sub_10EDA8(v2);
        *(_DWORD *)(v2 + 156) = v39;
        if ( v39 || i == -1 )
        {
          for ( i = 0; ; ++i )
          {
            v40 = sub_10C010(v39);
            if ( i >= v40 )
              break;
            v41 = (int *)sub_10C01C(*(_DWORD **)(v2 + 156), i);
            v42 = (int *)v41[1];
            v43 = v41;
            if ( v42 )
            {
              v44 = *v42;
              if ( *v42 > 0 )
              {
                v46 = (unsigned __int8 *)v42[2];
                v45 = *v46;
                v41[3] = v45;
                if ( v44 != 1 )
                  LOWORD(v45) = v45 | (v46[1] << 8);
              }
              else
              {
                v45 = v41[3];
              }
              v41[3] = v45 & 0x807F;
            }
            else
            {
              v41[3] = 32895;
            }
            if ( *v41 && *(_DWORD *)*v41 == 1 )
            {
              v22 = 0;
              do
              {
                v20 = v22 < sub_10C010(v43[2]);
                v21 = v22++;
                if ( !v20 )
                  goto LABEL_44;
                v19 = (_DWORD *)sub_10C01C((_DWORD *)v43[2], v21);
              }
              while ( *v19 != 4 );
              v23 = v19[1];
              if ( !v23 )
LABEL_44:
                v23 = sub_10E65C(v2);
              if ( !sub_11D7BC(*v43, v23) )
                goto LABEL_46;
            }
            v39 = *(_DWORD *)(v2 + 156);
          }
        }
        else
        {
LABEL_46:
          *(_DWORD *)(v2 + 128) |= 0x80u;
        }
        v24 = sub_10EDA8(v2);
        *(_DWORD *)(v2 + 168) = v24;
        if ( !v24 && v53 != -1 )
          *(_DWORD *)(v2 + 128) |= 0x80u;
        v25 = sub_10EDA8(v2);
        *(_DWORD *)(v2 + 172) = v25;
        if ( !v25 && v53 != -1 )
          *(_DWORD *)(v2 + 128) |= 0x80u;
        for ( j = 0; sub_10ED68(v2) > j; ++j )
        {
          v26 = sub_10ED88(v2);
          v27 = sub_110544(v26);
          if ( sub_EAC84(v27) == (char *)857 )
            *(_DWORD *)(v2 + 128) |= 0x1000u;
          if ( sub_110554(v26) && !sub_1204D0(v26) )
          {
            *(_DWORD *)(v2 + 128) |= 0x200u;
            break;
          }
        }
        sub_10FDE0((int *)v2);
        *(_DWORD *)(v2 + 128) |= 0x100u;
        __dmb(0xBu);
        *(_DWORD *)(v2 + 204) = 1;
        return sub_10C564(*(pthread_rwlock_t **)(v2 + 200));
      }
      v11 = *(_DWORD *)(v2 + 128);
    }
    *(_DWORD *)(v2 + 128) = v11 | 0x80;
    goto LABEL_19;
  }
  return result;
}
