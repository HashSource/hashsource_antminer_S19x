int __fastcall sub_20CD8C(int result, int a2, int *a3, int *a4)
{
  char *v5; // r4
  int v7; // r6
  bool v8; // zf
  int v9; // r3
  int v10; // r10
  int v11; // r3
  const char *v12; // r5
  _BOOL4 v13; // r4
  void *v14; // r4
  const char *p_dest; // r9
  bool v16; // zf
  char *v17; // r3
  char *v18; // r3
  bool v19; // zf
  int v20; // r3
  void *v21; // r4
  bool v22; // zf
  bool v23; // zf
  char *v24; // r3
  void *v25; // r4
  int v26; // r3
  bool v27; // zf
  int v28; // r3
  int v29; // r3
  _DWORD *v30; // r0
  _DWORD *v31; // r0
  int v32; // r4
  int v33; // r0
  bool v34; // zf
  __int64 v35; // r0
  void *v36; // r0
  const char *v37; // r4
  size_t v38; // r0
  void *dest; // [sp+18h] [bp-44h] BYREF
  int v40; // [sp+1Ch] [bp-40h]
  const char *v41; // [sp+20h] [bp-3Ch]
  int v42; // [sp+24h] [bp-38h]
  int v43; // [sp+28h] [bp-34h]
  char *s1; // [sp+2Ch] [bp-30h]
  char **v45; // [sp+30h] [bp-2Ch]
  int v46; // [sp+34h] [bp-28h]

  v5 = off_46DB90[0];
  v45 = off_46DB8C;
  v7 = result;
  v43 = a2;
  v8 = off_46DB90[0] == "preferred";
  if ( off_46DB90[0] != "preferred" )
    v8 = off_46DB90[0] == "only";
  v9 = !v8;
  if ( v8 )
  {
    s1 = (char *)v9;
    v10 = v9;
  }
  else
  {
    v25 = sub_92E28();
    v10 = ((int (__fastcall *)(int, _DWORD, int))loc_15B3A0)(v7, 0, v43);
    result = sub_92E40((int)v25);
    s1 = 0;
    v5 = v45[1];
  }
  v11 = *((_DWORD *)off_46DBB8 + 4 * (*(unsigned __int8 *)(v7 + 32) >> 3) + 1);
  if ( !v11 || (v11 = *(_DWORD *)(v11 + 4)) == 0 )
  {
    p_dest = (const char *)v11;
    v42 = v11;
    goto LABEL_35;
  }
  if ( v5 == "no" )
  {
    v42 = 0;
    v12 = v5 + 40;
    p_dest = 0;
    v46 = 0;
  }
  else
  {
    v12 = "if-needed";
    v13 = v5 != "if-needed";
    if ( !v10 )
      v13 = 1;
    if ( !v13 )
    {
      result = sub_26ED18(v10);
      v42 = result;
      if ( !result )
      {
        v5 = v45[1];
        if ( v5 == "preferred" )
          goto LABEL_113;
        p_dest = (const char *)v42;
        v41 = "compact";
LABEL_66:
        v27 = v5 == "both";
        if ( v5 != "both" )
          v27 = v5 == "only";
        v28 = v27;
        if ( v27 )
        {
LABEL_43:
          p_dest = 0;
          result = sub_26BC1C(*(_DWORD *)(v7 + 24));
          v46 = result;
          v5 = v45[1];
        }
        else
        {
          v46 = v28;
        }
        goto LABEL_44;
      }
    }
    v14 = sub_92E28();
    v46 = (*(int (__fastcall **)(int, int))(*((_DWORD *)off_46DBB8 + 4 * (*(unsigned __int8 *)(v7 + 32) >> 3) + 1) + 4))(
            v7,
            v43);
    sub_92E40((int)v14);
    result = v46;
    if ( !v46 || (result = sub_26ED18(v46), (v42 = result) != 0) )
    {
      p_dest = 0;
      goto LABEL_54;
    }
    v5 = v45[1];
    v41 = "compact";
    if ( v5 == "compact" || v5 == v41 + 8 )
      goto LABEL_87;
    p_dest = (const char *)v42;
  }
LABEL_20:
  v16 = v5 == v12;
  if ( v5 != v12 )
    v16 = v5 == "preferred";
  if ( v16 )
    goto LABEL_49;
LABEL_23:
  v17 = s1;
  *a3 = v7;
  a3[1] = v10;
  if ( v17 )
  {
LABEL_24:
    result = sub_327254(s1);
    a3[2] = result;
    goto LABEL_25;
  }
  a3[2] = (int)s1;
  if ( v10 )
  {
    while ( 1 )
    {
LABEL_25:
      v5 = "compact";
      v18 = v45[1];
      v19 = v18 == "default";
      if ( v18 != "default" )
        v19 = v18 == "compact";
      if ( !v19 || !v42 )
      {
        a3[3] = (int)"no";
        goto LABEL_31;
      }
      a3[3] = (int)"compact";
      v30 = (_DWORD *)sub_242FDC(result);
      result = sub_2573F0(*v30);
      if ( !result )
        goto LABEL_31;
      result = sub_94700(
                 (int)"stack.c",
                 511,
                 "%s: Assertion `%s' failed.",
                 "void read_frame_arg(symbol*, frame_info*, frame_arg*, frame_arg*)",
                 "!current_uiout->is_mi_like_p ()");
LABEL_87:
      if ( !v10 )
        goto LABEL_90;
      v31 = (_DWORD *)sub_242FDC(result);
      result = sub_2573F0(*v31);
      if ( result )
        break;
      sub_26BC70(v10);
      if ( sub_26BF4C(v10) )
        ((void (__fastcall *)(int))loc_26E00C)(v10);
      if ( sub_26BF4C(v46) )
        ((void (__fastcall *)(int))loc_26E00C)(v46);
      result = ((int (__fastcall *)(int))loc_26B478)(v10);
      if ( !result )
        break;
      dest = sub_92E28();
      v40 = sub_26EA24(v10);
      if ( sub_26BF4C(v40) )
        ((void (__fastcall *)(int))loc_26E00C)(v40);
      sub_26BC70(v40);
      v32 = sub_26EA24(v46);
      if ( sub_26BF4C(v32) )
        ((void (__fastcall *)(int))loc_26E00C)(v32);
      if ( v10 == v40 )
      {
        v33 = (int)dest;
LABEL_112:
        p_dest = 0;
        v42 = 1;
        result = sub_92E40(v33);
        v5 = v45[1];
        while ( 1 )
        {
LABEL_35:
          if ( v5 != "preferred" )
          {
            v41 = "compact";
            goto LABEL_66;
          }
          if ( !v10 )
            break;
LABEL_113:
          v35 = sub_94700(
                  (int)"stack.c",
                  471,
                  "%s: Assertion `%s' failed.",
                  "void read_frame_arg(symbol*, frame_info*, frame_arg*, frame_arg*)",
                  "val == NULL");
          if ( HIDWORD(v35) != 1 )
          {
            sub_339E78(v35);
            sub_92E60();
          }
          v36 = (void *)sub_339E78(v35);
          if ( *((_DWORD *)v36 + 1) == 11 )
          {
            p_dest = 0;
          }
          else
          {
            v37 = (const char *)*((_DWORD *)v36 + 2);
            v38 = strlen(v37);
            p_dest = (const char *)&dest;
            v36 = memcpy(&dest, v37, v38 + 1);
          }
          result = sub_339EF8(v36);
LABEL_54:
          v5 = v45[1];
          v41 = "compact";
          if ( v5 == "compact" )
          {
            v26 = (int)s1;
            if ( s1 )
              v26 = 1;
            if ( !p_dest )
              v26 = 0;
            if ( !v26 )
            {
              v42 = 0;
              v46 = 0;
              goto LABEL_44;
            }
            result = strcmp(s1, p_dest);
            if ( !result )
              p_dest = 0;
            v42 = 0;
            goto LABEL_66;
          }
          if ( v5 == v41 + 8 )
          {
            v34 = s1 == 0;
            if ( s1 )
              v34 = p_dest == 0;
            if ( !v34 )
            {
              result = strcmp(s1, p_dest);
              if ( !result )
                p_dest = 0;
            }
            v5 = "default";
          }
          v42 = 0;
        }
        v21 = sub_92E28();
        v10 = ((int (__fastcall *)(int, _DWORD, int))loc_15B3A0)(v7, 0, v43);
        result = sub_92E40((int)v21);
        v5 = v45[1];
        v22 = v5 == "only";
        if ( v5 != "only" )
          v22 = v5 == "both";
        if ( v22 )
          goto LABEL_42;
        if ( v5 != "preferred" )
        {
          v46 = 0;
          v41 = "compact";
          goto LABEL_44;
        }
        if ( !v10 || (result = sub_26ED18(v10)) != 0 )
        {
LABEL_42:
          v41 = "compact";
          goto LABEL_43;
        }
        v5 = v45[1];
        if ( v5 != "compact" )
        {
          v46 = 0;
          v12 = "if-needed";
          goto LABEL_20;
        }
        v46 = 0;
        result = sub_26ED18(v10);
        goto LABEL_23;
      }
      p_dest = (const char *)((int (__fastcall *)(int))loc_26B478)(v40);
      v33 = (int)dest;
      if ( p_dest )
        goto LABEL_112;
      result = sub_92E40((int)dest);
      v5 = v45[1];
LABEL_44:
      if ( v5 != v41 )
      {
        v23 = v5 == "if-needed";
        if ( v5 != "if-needed" )
          v23 = v5 == "preferred";
        if ( !v23 )
          goto LABEL_23;
      }
LABEL_49:
      if ( !v10 || (result = sub_26ED18(v10)) != 0 )
      {
        if ( !v46 )
          goto LABEL_23;
        *a3 = v7;
        a3[1] = 0;
        a3[2] = 0;
        goto LABEL_76;
      }
      v24 = s1;
      *a3 = v7;
      a3[1] = v10;
      if ( v24 )
        goto LABEL_24;
      a3[2] = (int)s1;
    }
    v5 = v45[1];
LABEL_90:
    p_dest = 0;
    goto LABEL_44;
  }
LABEL_76:
  a3[3] = (int)"only";
LABEL_31:
  v20 = v46;
  *a4 = v7;
  a4[1] = v20;
  if ( p_dest )
  {
    result = sub_327254(p_dest);
    a4[2] = result;
LABEL_33:
    a4[3] = (int)"only";
    return result;
  }
  v29 = v46;
  a4[2] = 0;
  if ( v29 )
    goto LABEL_33;
  a4[3] = (int)"no";
  return result;
}
