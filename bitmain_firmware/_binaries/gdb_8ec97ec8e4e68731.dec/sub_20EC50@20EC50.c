void __fastcall sub_20EC50(int a1, int a2)
{
  int v2; // r4
  const char *v3; // r7
  int v4; // r8
  int v5; // r11
  const char *v6; // r5
  int v7; // r6
  size_t i; // r9
  const char *v9; // t1
  int v10; // r10
  int v11; // r8
  bool v13; // zf
  size_t v14; // r2
  int v15; // r0
  int v16; // r0
  int *v17; // r4
  int v18; // r5
  int v19; // r8
  int v20; // r7
  bool v21; // cf
  int v22; // r9
  int v23; // r0
  const char *v24; // r7
  int v25; // r8
  int v26; // r0
  int v27; // r9
  int v28; // r7
  int *v29; // r0
  int v30; // r0
  int *v31; // r0
  const char *v32; // r0
  int v33; // r8
  int *v34; // r7
  int v35; // [sp+Ch] [bp-48h]
  int v36; // [sp+Ch] [bp-48h]
  void *v37; // [sp+10h] [bp-44h]
  int v38; // [sp+14h] [bp-40h]
  int v40[5]; // [sp+24h] [bp-30h] BYREF
  void *ptr; // [sp+38h] [bp-1Ch] BYREF
  int v42; // [sp+3Ch] [bp-18h]
  _BYTE v43[16]; // [sp+40h] [bp-14h] BYREF

  v37 = (void *)a1;
  ptr = v43;
  v42 = 0;
  v43[0] = 0;
  if ( !a1 )
  {
    v5 = -1;
    v10 = 0;
    v7 = -1;
    goto LABEL_26;
  }
  v40[0] = 0;
  sub_25B0DC(v40, a1);
  v2 = v40[0];
  v3 = *(const char **)v40[0];
  v38 = v40[0];
  if ( !*(_DWORD *)v40[0] )
  {
    v5 = -1;
    v10 = 0;
    v7 = -1;
    goto LABEL_25;
  }
  v4 = 0;
  v5 = -1;
  v6 = 0;
  v7 = -1;
  v35 = 0;
  do
  {
    for ( i = 0; strlen(v3) > i; ++i )
    {
      v3[i] = byte_438798[(unsigned __int8)v3[i]];
      v3 = *(const char **)v2;
    }
    if ( v5 == -1 )
    {
      if ( sub_25AA20(v3, "no-filters") )
      {
        v5 = (int)v6;
        goto LABEL_10;
      }
      v3 = *(const char **)v2;
    }
    if ( v7 != -1 )
      goto LABEL_9;
    if ( !sub_25AA20(v3, "full") )
    {
      v3 = *(const char **)v2;
LABEL_9:
      ++v4;
      v35 += strlen(v3);
      goto LABEL_10;
    }
    v7 = (int)v6;
LABEL_10:
    v9 = *(const char **)(v2 + 4);
    v2 += 4;
    v3 = v9;
    ++v6;
  }
  while ( v9 );
  v10 = v5 >= 0;
  v11 = v35 + v4;
  if ( v7 >= 0 || v5 >= 0 )
  {
    if ( v11 <= 0 )
    {
      v37 = 0;
      a1 = sub_31DAD0(v40[0]);
      goto LABEL_26;
    }
    do
    {
      while ( 1 )
      {
        v13 = v7 == (_DWORD)v3;
        if ( (const char *)v7 != v3 )
          v13 = v5 == (_DWORD)v3;
        if ( !v13 )
          break;
        if ( v6 == ++v3 )
          goto LABEL_24;
      }
      v14 = strlen(*(const char **)(v38 + 4 * (_DWORD)v3));
      if ( v14 > 0x7FFFFFFF - v42 )
        sub_33D184("basic_string::append");
      sub_33C320(&ptr, *(_DWORD *)(v38 + 4 * (_DWORD)v3), v14);
      if ( v42 == 0x7FFFFFFF )
        sub_33D184("basic_string::append");
      sub_33C320(&ptr, &word_3E1F84, 1);
      ++v3;
    }
    while ( v6 != v3 );
LABEL_24:
    v37 = ptr;
    v38 = v40[0];
LABEL_25:
    a1 = sub_31DAD0(v38);
  }
  else
  {
    v10 = 0;
    v5 = -1;
    v7 = -1;
    a1 = sub_31DAD0(v40[0]);
  }
LABEL_26:
  v15 = sub_22EAC0(a1);
  if ( !v15 )
    sub_946E0("No stack.");
  v16 = sub_15F70C(v15);
  v17 = (int *)v16;
  if ( !v37 )
  {
    v18 = -1;
    v36 = -1;
    goto LABEL_31;
  }
  v16 = sub_14CC00((int)v37);
  v18 = v16;
  if ( v16 < 0 )
  {
    if ( v17 )
    {
      v33 = ~v16;
      v34 = v17;
      while ( 1 )
      {
        sub_258BD4(v16);
        v16 = ((int (__fastcall *)(int *))loc_15FA88)(v34);
        v34 = (int *)v16;
        if ( !v16 )
          break;
        v21 = v33-- != 0;
        if ( !v21 )
        {
          do
          {
            sub_258BD4(v16);
            v17 = (int *)((int (__fastcall *)(int *))loc_15FA88)(v17);
            v16 = ((int (__fastcall *)(int *))loc_15FA88)(v34);
            v34 = (int *)v16;
          }
          while ( v16 );
          v37 = (void *)v18;
          v18 = -1;
          v36 = 0;
          goto LABEL_31;
        }
      }
      v37 = (void *)v18;
      v36 = dword_48A514;
      if ( !dword_48A514 )
        goto LABEL_79;
      v36 = 0;
      v18 = -1;
      v19 = -2;
      goto LABEL_34;
    }
    v36 = 0;
    v37 = (void *)v16;
LABEL_79:
    v18 = -1;
  }
  else
  {
    v36 = v16;
    v37 = 0;
LABEL_31:
    if ( dword_48A514 )
    {
      if ( v17 )
      {
        v19 = v18 - 1;
        if ( v18 )
        {
LABEL_34:
          v20 = (int)v17;
          do
          {
            sub_258BD4(v16);
            v22 = sub_15DE14(v20);
            v23 = sub_214938();
            sub_21BFA8(v22, v23);
            v16 = ((int (__fastcall *)(int))loc_15FA88)(v20);
            v20 = v16;
            if ( !v16 )
              break;
            v21 = v19-- != 0;
          }
          while ( v21 );
        }
      }
    }
  }
  if ( v5 == -1 )
  {
    v24 = off_46DB8C[0];
    v25 = v7 == -1 ? 7 : 15;
    v26 = strcmp(off_46DB8C[0], "scalars");
    if ( v26 )
    {
      v26 = strcmp(v24, "all");
      v27 = v26 ? 0 : 4;
    }
    else
    {
      v27 = 3;
    }
    v28 = sub_15F70C(v26);
    v29 = (int *)sub_242FDC(v28);
    v16 = sub_157E7C(v28, v25, v27, *v29, (int)v37, v36);
    if ( v16 == 3 )
      v10 |= 1u;
  }
  if ( v10 && v17 )
  {
    if ( v18 )
    {
      while ( 1 )
      {
        sub_258BD4(v16);
        sub_20DE90(v17, 1, 0, 1, 0);
        if ( v7 != -1 )
        {
          v30 = ((int (__fastcall *)(int *, int *))loc_15CFA0)(v40, v17);
          v31 = (int *)sub_242F8C(v30);
          sub_20C630((int)v17, 1, *v31);
          v17 = (int *)sub_15FE8C(v40[0], v40[1], v40[2], v40[3], v40[4]);
          if ( !v17 )
          {
            sub_946B0("Unable to restore previously selected frame.");
            goto LABEL_59;
          }
        }
        v16 = ((int (__fastcall *)(int *))loc_15FA88)(v17);
        if ( !v16 )
          break;
        --v18;
        v17 = (int *)v16;
        if ( !v18 )
          goto LABEL_70;
      }
      if ( ((int (__fastcall *)(int *))loc_160460)(v17) > 2 )
      {
        v32 = (const char *)((int (__fastcall *)(int *))loc_16055C)(v17);
        sub_259F10("Backtrace stopped: %s\n", v32);
      }
    }
    else
    {
LABEL_70:
      if ( a2 )
        sub_259F10("(More stack frames follow...)\n");
    }
  }
LABEL_59:
  if ( ptr != v43 )
    sub_339E64(ptr);
}
