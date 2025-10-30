void __fastcall sub_1C6134(const char *a1)
{
  int v1; // r7
  _DWORD *v2; // r5
  int *v3; // r3
  int *v4; // r4
  unsigned int v5; // r0
  int v6; // r1
  unsigned int v7; // r6
  int v8; // r8
  int v9; // r9
  int v10; // r2
  int v11; // r8
  int v12; // r9
  const char *v13; // r9
  int v14; // r2
  int v15; // r3
  unsigned int v16; // r6
  int v17; // r0
  const char *v18; // r3
  int v19; // r0
  const char *v20; // r6
  _DWORD *v21; // r3
  _BYTE *v22; // r3
  int v23; // r2
  int v24; // [sp+8h] [bp-4Ch]
  const char *v25; // [sp+8h] [bp-4Ch]
  const char *v26; // [sp+Ch] [bp-48h]
  void *ptr; // [sp+20h] [bp-34h] BYREF
  int v29; // [sp+24h] [bp-30h]
  _DWORD v30[4]; // [sp+28h] [bp-2Ch] BYREF
  void *v31; // [sp+38h] [bp-1Ch] BYREF
  int v32; // [sp+3Ch] [bp-18h]
  _DWORD v33[5]; // [sp+40h] [bp-14h] BYREF

  if ( !a1 )
    goto LABEL_60;
  v1 = sub_14CB9C((int)a1);
  v2 = *(_DWORD **)(dword_487D2C + 36);
  if ( !v2 )
    goto LABEL_54;
  v3 = (int *)v2[43];
  v24 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v4 = (int *)v2[42];
      if ( v4 < v3 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            if ( *v4 )
            {
              if ( !v2[45] )
              {
                v5 = sub_214778(v1, v4);
                v6 = v4[1];
                v7 = v5;
                v8 = *(_DWORD *)(v6 + 144);
                v9 = *(_DWORD *)(*v4 + 28);
                if ( v9 + *(_DWORD *)(v8 + 4 * sub_162FDC(*(_DWORD *)(v6 + 36), *v4)) <= v5 )
                {
                  v10 = v4[1];
                  v11 = *(_DWORD *)(v10 + 144);
                  v12 = *(_DWORD *)(*v4 + 28) + *(_DWORD *)(*v4 + 36);
                  if ( v12 + *(_DWORD *)(v11 + 4 * sub_162FDC(*(_DWORD *)(v10 + 36), *v4)) > v7 )
                  {
                    sub_1B23BC(&v31, v7, (int)v4);
                    v13 = (const char *)v31;
                    if ( v31 )
                      break;
                  }
                }
              }
            }
            v3 = (int *)v2[43];
            v4 += 3;
            if ( v3 <= v4 )
              goto LABEL_30;
          }
          v14 = *((__int16 *)v31 + 11);
          v15 = *((_DWORD *)v31 + 2);
          if ( v14 == -1 )
            goto LABEL_59;
          v16 = v7 - (v15 + *(_DWORD *)(v2[36] + 4 * v14));
          v17 = sub_2142D0(v4);
          v18 = "unmapped";
          if ( v17 )
            v18 = "mapped";
          v26 = v18;
          if ( !dword_46D448 )
            v13 = *(const char **)v13;
          v25 = *(const char **)*v4;
          if ( dword_46D448 )
            v13 = (const char *)sub_21B3C4(v13);
          v29 = 0;
          ptr = v30;
          LOBYTE(v30[0]) = 0;
          if ( v16 )
            break;
LABEL_20:
          v19 = v4[1];
          if ( !v19 || !sub_1B87A8(v19) )
          {
            sub_94700(
              (int)"./printcmd.c",
              1347,
              "%s: Assertion `%s' failed.",
              "void info_symbol_command(const char*, int)",
              "osect->objfile && objfile_name (osect->objfile)");
LABEL_59:
            sub_94700((int)"./printcmd.c", 1331, "Section index is uninitialized", v15);
LABEL_60:
            sub_51E9C("address");
          }
          v20 = (const char *)sub_1B87A8(v4[1]);
          v21 = *(_DWORD **)(dword_487D2C + 36);
          if ( v21 && *v21 )
          {
            if ( sub_2145E4(v1, v4) )
            {
              if ( sub_2142A0(v4) )
                sub_259F10("%s in load address range of %s overlay section %s of %s\n", v13, v26, v25, v20);
              else
                sub_259F10("%s in load address range of section %s of %s\n", v13, v25, v20);
            }
            else if ( sub_2142A0(v4) )
            {
              sub_259F10("%s in %s overlay section %s of %s\n", v13, v26, v25, v20);
            }
            else
            {
              sub_259F10("%s in section %s of %s\n", v13, v25, v20);
            }
          }
          else if ( sub_2145E4(v1, v4) )
          {
            if ( sub_2142A0(v4) )
              sub_259F10("%s in load address range of %s overlay section %s\n", v13, v26, v25);
            else
              sub_259F10("%s in load address range of section %s\n", v13, v25);
          }
          else if ( sub_2142A0(v4) )
          {
            sub_259F10("%s in %s overlay section %s\n", v13, v26, v25);
          }
          else
          {
            sub_259F10("%s in section %s\n", v13, v25);
          }
          if ( ptr != v30 )
            sub_339E64(ptr);
          v4 += 3;
          v24 = 1;
          v3 = (int *)v2[43];
          if ( v3 <= v4 )
            goto LABEL_30;
        }
        sub_931D8((char **)&v31, "%s + %u", v13, v16);
        v22 = ptr;
        if ( v31 == v33 )
        {
          sub_33B48C(&ptr, &v31);
          v22 = v31;
          goto LABEL_43;
        }
        if ( ptr == v30 )
        {
          ptr = v31;
          v29 = v32;
          v30[0] = v33[0];
        }
        else
        {
          ptr = v31;
          v29 = v32;
          v23 = v30[0];
          v30[0] = v33[0];
          if ( v22 )
          {
            v31 = v22;
            v33[0] = v23;
LABEL_43:
            v32 = 0;
            *v22 = 0;
            if ( v31 != v33 )
              sub_339E64(v31);
            v13 = (const char *)ptr;
            goto LABEL_20;
          }
        }
        v31 = v33;
        v22 = v33;
        goto LABEL_43;
      }
LABEL_30:
      if ( v3 == v4 )
        break;
      v3 = (int *)v2[43];
      if ( v3 != v4 )
        goto LABEL_32;
    }
    v2 = (_DWORD *)*v2;
    if ( !v2 )
      break;
    v3 = (int *)v2[43];
  }
LABEL_32:
  if ( !v24 )
LABEL_54:
    sub_259F10("No symbol matches %s.\n", a1);
}
