int __fastcall sub_53A38(int a1, char *src)
{
  _BYTE *v4; // r7
  int v5; // r4
  bool v6; // zf
  char *v7; // r5
  char *v8; // r6
  bool v9; // zf
  int v10; // r5
  size_t v11; // r4
  int v12; // r5
  int v13; // r4

  v4 = (_BYTE *)dword_4747B0;
  if ( !dword_4747B0 )
  {
    dword_4747B4 = 80;
    v4 = (_BYTE *)sub_93028(80);
    dword_4747B0 = (int)v4;
  }
  v5 = (unsigned __int8)*src;
  v6 = v5 == 0;
  if ( *src )
    v6 = v5 == 10;
  if ( v6 )
  {
    v11 = 0;
    v10 = 0;
  }
  else
  {
    v7 = src;
    while ( 1 )
    {
      v8 = v7 + 1;
      v6 = (v5 & 0xFD) == 44;
      v5 = (unsigned __int8)v7[1];
      if ( v6 && (!v7[1] || isspace((unsigned __int8)v7[1])) )
        break;
      v9 = v5 == 10;
      if ( v5 != 10 )
        v9 = v5 == 0;
      ++v7;
      if ( v9 )
      {
        v10 = v8 - src;
        v11 = v8 - src;
        goto LABEL_16;
      }
    }
    v10 = v7 - src;
    v11 = v10;
  }
LABEL_16:
  if ( v10 >= dword_4747B4 )
  {
    v12 = v10 + 1;
    dword_4747B4 = v12;
    free(v4);
    v4 = (_BYTE *)sub_93028(v12);
    dword_4747B0 = (int)v4;
  }
  strncpy(v4, src, v11);
  v4[v11] = 0;
  v13 = (unsigned __int8)*v4;
  if ( islower(v13) )
    *v4 = toupper(v13);
  return sub_25A6BC(v4, a1);
}
