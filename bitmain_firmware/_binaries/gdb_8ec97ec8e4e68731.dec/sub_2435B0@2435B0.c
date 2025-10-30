int __fastcall sub_2435B0(unsigned __int8 *a1, int a2)
{
  _DWORD *v3; // r11
  void *v4; // r0
  int v5; // r3
  unsigned __int8 *v6; // r4
  bool v7; // zf
  int v8; // t1
  bool v9; // zf
  int v10; // r0
  char *v11; // r9
  int v12; // r2
  int v13; // r6
  size_t v14; // r8
  int v15; // r3
  int result; // r0
  __int16 v17; // r2
  size_t v18; // r0
  int v19; // r3
  bool v20; // zf
  char *i; // r8
  int v22; // r2
  bool v23; // zf
  _DWORD *v24; // r2
  _BYTE *v25; // r3
  int v26; // r2
  size_t v27; // r0
  void *v28; // r0
  int v30; // [sp+14h] [bp-50h]
  _BOOL4 v31; // [sp+18h] [bp-4Ch]
  _DWORD *v32; // [sp+1Ch] [bp-48h]
  int v33; // [sp+24h] [bp-40h] BYREF
  unsigned __int8 *v34; // [sp+28h] [bp-3Ch] BYREF
  size_t v35; // [sp+2Ch] [bp-38h] BYREF
  void *ptr; // [sp+30h] [bp-34h] BYREF
  size_t v37; // [sp+34h] [bp-30h]
  _DWORD v38[4]; // [sp+38h] [bp-2Ch] BYREF
  void *v39; // [sp+48h] [bp-1Ch] BYREF
  size_t v40; // [sp+4Ch] [bp-18h]
  _DWORD v41[5]; // [sp+50h] [bp-14h] BYREF

  v3 = (_DWORD *)sub_25B304();
  sub_24343C(&v33);
  if ( a1 )
  {
    v4 = (void *)off_489AD0();
    v5 = *a1;
    v6 = a1;
    v7 = v5 == 32;
    if ( v5 != 32 )
      v7 = v5 == 9;
    if ( v7 )
    {
      do
      {
        v8 = *++v6;
        v5 = v8;
        v9 = v8 == 9;
        if ( v8 != 9 )
          v9 = v5 == 32;
      }
      while ( v9 );
    }
    if ( v5 )
    {
      v34 = v6;
      v31 = *(_DWORD *)(dword_487668 + 68) == 0;
      sub_57D7C((int)v6);
      v10 = sub_544C8(&v34, dword_474744, "", 0, 1);
      v11 = (char *)v34;
      v12 = dword_48A51C;
      v13 = v10;
      v14 = *v34;
      dword_48A51C = 0;
      v30 = v12;
      if ( v14 )
      {
        v17 = *(_WORD *)(v10 + 12);
        v37 = 0;
        LOBYTE(v38[0]) = 0;
        ptr = v38;
        if ( (v17 & 0x180) != 0x80 && !sub_51EB0(v10) )
        {
          v18 = strlen(v11) - 1;
          if ( !__CFADD__(v11, v18) )
          {
            v19 = (unsigned __int8)v11[v18];
            v20 = v19 == 9;
            if ( v19 != 9 )
              v20 = v19 == 32;
            if ( v20 )
            {
              for ( i = &v11[v18]; v11 <= i - 1; --i )
              {
                v22 = (unsigned __int8)*(i - 1);
                v23 = v22 == 9;
                if ( v22 != 9 )
                  v23 = v22 == 32;
                if ( !v23 )
                  break;
              }
              if ( &v11[v18] != i - 1 )
              {
                v14 = i - v11;
                v32 = v41;
                v35 = v14;
                v39 = v41;
                if ( v14 > 0xF )
                {
                  v28 = (void *)sub_33B2BC(&v39, &v35, 0);
                  v39 = v28;
                  v41[0] = v35;
                  goto LABEL_64;
                }
                if ( v14 == 1 )
                {
                  v24 = v41;
                  LOBYTE(v41[0]) = *v11;
                }
                else
                {
                  if ( v14 )
                    goto LABEL_75;
                  v24 = v41;
                }
                goto LABEL_50;
              }
            }
          }
        }
        v14 = (size_t)v11;
      }
      else
      {
        v37 = 0;
        LOBYTE(v38[0]) = 0;
        ptr = v38;
      }
      while ( 1 )
      {
        sub_5952C(v13);
        if ( (*(_BYTE *)(v13 + 12) & 2) != 0 )
          sub_5418C(v6);
        if ( *(_DWORD *)(v13 + 8) == 14 && *(_DWORD *)(v13 + 84) )
        {
          sub_5933C(v13, (char *)v14);
        }
        else
        {
          v15 = *(_WORD *)(v13 + 12) & 0x180;
          if ( v15 == 128 )
          {
            sub_59B84((char *)v14, a2, v13);
          }
          else if ( v15 == 256 )
          {
            ((void (__fastcall *)(size_t, int, int))loc_5A6E0)(v14, a2, v13);
          }
          else
          {
            if ( !sub_54C4C(v13) )
              sub_946E0("That is not a command, just a help topic.");
            if ( off_48A520 )
              ((void (__fastcall *)(int, size_t, int))off_48A520)(v13, v14, a2);
            else
              sub_54C5C(v13);
          }
        }
        if ( !(v31 | *(_DWORD *)(dword_487668 + 36)) && !*(_DWORD *)(dword_487668 + 68) )
          sub_24353C();
        sub_5957C(v13);
        v6 = (unsigned __int8 *)dword_48A51C;
        if ( !dword_48A51C || (unsigned __int8 *)dword_48A4EC != a1 )
        {
LABEL_25:
          v4 = ptr;
          if ( ptr != v38 )
            sub_339E64(ptr);
          dword_48A51C = v30;
          break;
        }
        a1 = (unsigned __int8 *)strlen(v11);
        v27 = strlen((const char *)dword_48A51C);
        if ( (unsigned int)a1 >= v27 )
        {
          memcpy(v11, (const void *)dword_48A51C, v27 + 1);
          goto LABEL_25;
        }
        sub_94700(
          (int)"top.c",
          639,
          "%s: Assertion `%s' failed.",
          "void execute_command(const char*, int)",
          "strlen (args_pointer) >= strlen (repeat_arguments)");
LABEL_75:
        v28 = v32;
LABEL_64:
        memcpy(v28, v11, v14);
        v14 = v35;
        v24 = v39;
LABEL_50:
        v40 = v14;
        *((_BYTE *)v24 + v14) = 0;
        v25 = ptr;
        if ( v39 == v32 )
        {
          sub_33B48C(&ptr, &v39);
          v25 = v39;
        }
        else
        {
          if ( ptr == v38 )
          {
            ptr = v39;
            v37 = v40;
            v38[0] = v41[0];
          }
          else
          {
            ptr = v39;
            v37 = v40;
            v26 = v38[0];
            v38[0] = v41[0];
            if ( v25 )
            {
              v39 = v25;
              v41[0] = v26;
              goto LABEL_54;
            }
          }
          v39 = v32;
          v25 = v41;
          v32 = v41;
        }
LABEL_54:
        v40 = 0;
        *v25 = 0;
        if ( v39 != v32 )
          sub_339E64(v39);
        v14 = (size_t)ptr;
      }
    }
    sub_24346C((int)v4);
    sub_92640(v3);
    result = v33;
    if ( v33 )
      return sub_26C300(result);
  }
  else
  {
    sub_92640(v3);
    result = v33;
    if ( v33 )
      return sub_26C300(result);
  }
  return result;
}
