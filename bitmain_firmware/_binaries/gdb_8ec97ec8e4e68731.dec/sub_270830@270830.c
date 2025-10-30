int __fastcall sub_270830(int a1, int a2, int a3)
{
  int v3; // r6
  int v4; // r7
  _DWORD *v5; // r8
  int v6; // r10
  int v10; // r0
  int v11; // r0
  int v12; // r3
  _BYTE *v13; // r2
  int v14; // r3
  int v15; // r0
  int v16; // r0
  int v17; // r3
  _BYTE *v18; // r3
  int v19; // r2
  size_t v20; // r2
  int v21; // r0
  size_t v23; // r2
  int v24; // r0
  int v25; // r3
  int v26; // r5
  int v27; // r2
  int v28; // r2
  void *v29; // r8
  _BYTE *v30; // r3
  int v31; // r2
  bool v32; // zf
  void *v33; // r0
  int v34; // r0
  __int64 v35; // r10
  int v36; // r0
  int v37; // r0
  void *s2; // [sp+8h] [bp-4Ch] BYREF
  int v39; // [sp+Ch] [bp-48h]
  _DWORD v40[4]; // [sp+10h] [bp-44h] BYREF
  void *v41; // [sp+20h] [bp-34h] BYREF
  int v42; // [sp+24h] [bp-30h]
  _DWORD v43[4]; // [sp+28h] [bp-2Ch] BYREF
  void *ptr; // [sp+38h] [bp-1Ch] BYREF
  int v45; // [sp+3Ch] [bp-18h]
  _DWORD v46[5]; // [sp+40h] [bp-14h] BYREF

  if ( *(_DWORD *)(a1 + 76) || !*(_DWORD *)(a1 + 80) )
  {
    v10 = (*(int (__fastcall **)(int))(*(_DWORD *)(*(_DWORD *)(a1 + 104) + 36) + 28))(a1);
    if ( *(_DWORD *)(*(_DWORD *)(a1 + 152) + 8) )
      v4 = 1;
    else
      v4 = v10;
    if ( a2 )
    {
      v11 = sub_26EA24(a2);
      v12 = *(_DWORD *)(a1 + 76);
      v3 = v11;
      if ( v12 )
      {
        v13 = *(_BYTE **)(v12 + 24);
        v14 = v11;
        if ( v11 )
          v14 = 1;
        if ( *v13 == 4 )
          a2 = v14;
        else
          a2 = v4 & v14;
      }
      else
      {
        v14 = v11;
        if ( v11 )
          v14 = 1;
        a2 = v4 & v14;
      }
      if ( a2 )
      {
        v15 = sub_26BF4C(v11);
        LOBYTE(a2) = v15;
        if ( v15 )
        {
          v25 = *(_DWORD *)(a1 + 88);
          v26 = *(unsigned __int8 *)(a1 + 140);
          if ( v25 )
            v27 = *(unsigned __int8 *)(a1 + 140);
          else
            v27 = v26 | 1;
          if ( !v27 )
          {
            do
            {
              v26 = *(unsigned __int8 *)(v25 + 140);
              v25 = *(_DWORD *)(v25 + 88);
              if ( v25 )
                v28 = v26;
              else
                v28 = v26 | 1;
            }
            while ( !v28 );
          }
          a2 = a3 & v26;
          if ( !a2 )
          {
            v29 = sub_92E28();
            ((void (__fastcall *)(int))loc_26E00C)(v3);
            sub_92E40((int)v29);
          }
        }
LABEL_14:
        v5 = v40;
        sub_26C1F0(v3);
        s2 = v40;
        v39 = 0;
        LOBYTE(v40[0]) = 0;
        if ( sub_26BF4C(v3) || *(_DWORD *)(*(_DWORD *)(a1 + 152) + 8) )
          goto LABEL_16;
        sub_2706B0(&v41, v3, *(_DWORD *)(a1 + 108));
        v30 = s2;
        if ( v41 == v43 )
        {
          sub_33B48C(&s2, &v41);
          v30 = v41;
          goto LABEL_96;
        }
        if ( s2 == v40 )
        {
          s2 = v41;
          v39 = v42;
          v40[0] = v43[0];
        }
        else
        {
          s2 = v41;
          v39 = v42;
          v31 = v40[0];
          v40[0] = v43[0];
          if ( v30 )
          {
            v41 = v30;
            v43[0] = v31;
LABEL_96:
            v42 = 0;
            *v30 = 0;
            if ( v41 != v43 )
              sub_339E64(v41);
LABEL_16:
            while ( 1 )
            {
              v16 = *(_DWORD *)(a1 + 80);
              v6 = v4 & (a3 ^ 1);
              if ( !v6 )
                break;
              v4 = *(unsigned __int8 *)(a1 + 112);
              if ( *(_BYTE *)(a1 + 112) || *(_DWORD *)(*(_DWORD *)(a1 + 152) + 8) )
                goto LABEL_19;
              a3 = *(unsigned __int8 *)(a1 + 141);
              if ( *(_BYTE *)(a1 + 141) )
              {
                v32 = sub_26BF4C(v16) == 0;
                v16 = *(_DWORD *)(a1 + 80);
                if ( !v32 )
                {
                  v4 = a3;
                  goto LABEL_19;
                }
              }
              if ( !v16 )
                goto LABEL_89;
              if ( !v3 )
              {
                v4 = v6;
                goto LABEL_21;
              }
              if ( sub_26BF4C(v16) )
              {
                v36 = sub_94700(
                        (int)"varobj.c",
                        1373,
                        "%s: Assertion `%s' failed.",
                        "bool install_new_value(varobj*, value*, bool)",
                        "!value_lazy (var->value)");
                v37 = sub_339EF8(v36);
                sub_338FFC(v37);
              }
              if ( sub_26BF4C(v3) )
              {
                sub_94700(
                  (int)"varobj.c",
                  1374,
                  "%s: Assertion `%s' failed.",
                  "bool install_new_value(varobj*, value*, bool)",
                  "!value_lazy (value)");
              }
              else
              {
                v23 = *(_DWORD *)(a1 + 120);
                if ( v23 && v39 )
                {
                  if ( v23 == v39 )
                    v4 = memcmp(*(const void **)(a1 + 116), s2, v23) != 0;
                  else
                    v4 = v6;
                  v16 = *(_DWORD *)(a1 + 80);
                  if ( !v16 )
                  {
                    *(_DWORD *)(a1 + 80) = v3;
                    goto LABEL_51;
                  }
                  goto LABEL_20;
                }
              }
              v35 = sub_94700(
                      (int)"varobj.c",
                      1376,
                      "%s: Assertion `%s' failed.",
                      "bool install_new_value(varobj*, value*, bool)",
                      "!var->print_value.empty () && !print_value.empty ()");
              sub_92E40((int)v40);
              if ( HIDWORD(v35) != 1 )
              {
                sub_339E78(v35);
                sub_92E60();
              }
              v34 = sub_339E78(v35);
              v5 = v40;
              sub_339EF8(v34);
              s2 = v40;
              v39 = 0;
              v3 = 0;
              LOBYTE(v40[0]) = 0;
            }
            if ( (unsigned __int8)v4 | (unsigned __int8)a3 )
            {
              v4 = 0;
            }
            else
            {
              v4 = v3;
              if ( v3 )
                v4 = 1;
              if ( v16 )
                v4 ^= 1u;
            }
LABEL_19:
            if ( !v16 )
              goto LABEL_22;
LABEL_20:
            if ( v16 == v3 )
              goto LABEL_51;
LABEL_21:
            ((void (*)(void))loc_26C200)();
LABEL_22:
            *(_DWORD *)(a1 + 80) = v3;
            if ( v3 )
              goto LABEL_51;
            goto LABEL_23;
          }
        }
        v41 = v43;
        v30 = v43;
        goto LABEL_96;
      }
      if ( v14 )
        goto LABEL_14;
    }
    v5 = v40;
    LOBYTE(a2) = 0;
    v39 = 0;
    LOBYTE(v40[0]) = 0;
    v3 = 0;
    s2 = v40;
    goto LABEL_16;
  }
  sub_94700(
    (int)"varobj.c",
    1257,
    "%s: Assertion `%s' failed.",
    "bool install_new_value(varobj*, value*, bool)",
    "var->type || CPLUS_FAKE_CHILD (var)");
LABEL_89:
  if ( !v3 )
  {
    *(_DWORD *)(a1 + 80) = 0;
LABEL_23:
    *(_BYTE *)(a1 + 141) = 0;
    goto LABEL_24;
  }
  *(_DWORD *)(a1 + 80) = v3;
  v4 = v6;
LABEL_51:
  if ( sub_26BF4C(v3) )
    v24 = a2 & 1;
  else
    v24 = 0;
  if ( !v24 )
    goto LABEL_23;
  *(_BYTE *)(a1 + 141) = 1;
LABEL_24:
  v17 = *(_DWORD *)(a1 + 152);
  *(_BYTE *)(a1 + 112) = 0;
  if ( !*(_DWORD *)(v17 + 8) )
    goto LABEL_34;
  sub_2706B0(&ptr, *(_DWORD *)(a1 + 80), *(_DWORD *)(a1 + 108));
  v18 = s2;
  if ( ptr == v46 )
  {
    sub_33B48C(&s2, &ptr);
    v18 = ptr;
    goto LABEL_29;
  }
  if ( s2 == v5 )
  {
    s2 = ptr;
    v39 = v45;
    v40[0] = v46[0];
    goto LABEL_85;
  }
  s2 = ptr;
  v39 = v45;
  v19 = v40[0];
  v40[0] = v46[0];
  if ( !v18 )
  {
LABEL_85:
    ptr = v46;
    v18 = v46;
    goto LABEL_29;
  }
  ptr = v18;
  v46[0] = v19;
LABEL_29:
  v45 = 0;
  *v18 = 0;
  if ( ptr != v46 )
    sub_339E64(ptr);
  v20 = *(_DWORD *)(a1 + 120);
  if ( v20 )
  {
    if ( v39 && v20 == v39 )
    {
      if ( memcmp(*(const void **)(a1 + 116), s2, v20) )
        v4 = 1;
    }
    else
    {
      v4 = 1;
    }
  }
  else if ( v39 )
  {
    v4 = 1;
  }
LABEL_34:
  sub_33B48C(a1 + 116, &s2);
  v21 = *(_DWORD *)(a1 + 80);
  if ( v21 && !sub_26BC70(v21) )
  {
    sub_94700(
      (int)"varobj.c",
      1418,
      "%s: Assertion `%s' failed.",
      "bool install_new_value(varobj*, value*, bool)",
      "!var->value || value_type (var->value)");
    v33 = s2;
    if ( s2 != v5 )
      sub_339E64(s2);
    sub_338FFC(v33);
  }
  if ( s2 != v5 )
    sub_339E64(s2);
  return v4;
}
