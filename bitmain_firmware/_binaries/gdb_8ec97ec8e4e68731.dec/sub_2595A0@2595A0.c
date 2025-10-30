void __fastcall sub_2595A0(char *s2, _BYTE *a2, void *a3)
{
  int v3; // r6
  int *v7; // r0
  unsigned int v8; // r3
  unsigned __int8 *v9; // r5
  int v10; // r4
  int *v11; // r0
  int v12; // r3
  unsigned int v13; // t1
  int *v14; // r0
  int *v15; // r0
  int *v16; // r0
  int *v17; // r0
  int *v18; // r0
  int *v19; // r0
  int *v20; // r0
  int *v21; // r0
  int *v22; // r0
  int *v23; // r0
  void *v24; // r8
  int *v25; // r0
  int *v26; // r0
  int *v27; // r0

  LOWORD(v3) = (unsigned __int16)&dword_48A9B0;
  if ( *a2 == 10 )
  {
    HIWORD(v3) = (unsigned int)&dword_48A9B0 >> 16;
    *(_DWORD *)(v3 + 0x2C) = 0;
  }
  else
  {
    HIWORD(v3) = (unsigned int)&dword_48A9B0 >> 16;
    if ( *(_DWORD *)(v3 + 0x2C) )
    {
LABEL_4:
      if ( dword_46DDE0 )
        goto LABEL_5;
      v24 = off_46DDE8;
      v25 = (int *)sub_242FC8();
      sub_256850((int)v24, *v25);
      v26 = (int *)sub_242FC8();
      sub_256850((int)&word_356638, *v26);
      v27 = (int *)sub_242FC8();
      sub_256850((int)s2, *v27);
      if ( dword_46DDE0 )
        goto LABEL_5;
      goto LABEL_6;
    }
  }
  if ( strcmp((const char *)off_46DDE4, s2) )
    goto LABEL_4;
  if ( dword_46DDE0 )
  {
LABEL_5:
    dword_46DDE0 = 0;
    v7 = (int *)sub_242FC8();
    sub_256850((int)s2, *v7);
  }
LABEL_6:
  v8 = (unsigned __int8)*a2;
  v9 = a2 + 1;
  off_46DDE4 = s2;
  off_46DDE8 = a3;
  v10 = v8;
  if ( v8 )
  {
    do
    {
      if ( v8 == 11 )
      {
        v17 = (int *)sub_242FC8();
        sub_256850((int)"\\v", *v17);
      }
      else if ( v8 <= 0xB )
      {
        if ( v8 == 9 )
        {
          v22 = (int *)sub_242FC8();
          sub_256850((int)"\\t", *v22);
        }
        else if ( v8 > 9 )
        {
          dword_46DDE0 = 1;
          v21 = (int *)sub_242FC8();
          sub_256850((int)"\\n", *v21);
        }
        else
        {
          if ( v8 != 8 )
            goto LABEL_25;
          v11 = (int *)sub_242FC8();
          sub_256850((int)"\\b", *v11);
        }
      }
      else if ( v8 == 13 )
      {
        v19 = (int *)sub_242FC8();
        sub_256850((int)"\\r", *v19);
      }
      else if ( v8 >= 0xD )
      {
        if ( v8 != 92 )
        {
LABEL_25:
          if ( isprint(v10) )
          {
            v20 = (int *)sub_242FC8();
            sub_25682C(*v20);
          }
          else
          {
            v23 = (int *)sub_242FC8();
            sub_2594B0(*v23, "\\x%02x", v10);
          }
          goto LABEL_12;
        }
        v14 = (int *)sub_242FC8();
        sub_256850((int)"\\\\", *v14);
      }
      else
      {
        v18 = (int *)sub_242FC8();
        sub_256850((int)"\\f", *v18);
      }
LABEL_12:
      v12 = v10 - 13;
      v13 = *v9++;
      v10 = v13;
      *(_DWORD *)(v3 + 0x2C) = v12 == 0;
      v8 = v13;
    }
    while ( v13 );
  }
  if ( dword_46DDE0 )
  {
    v15 = (int *)sub_242FC8();
    sub_256850((int)a3, *v15);
    v16 = (int *)sub_242FC8();
    sub_256850((int)&word_356638, *v16);
  }
}
