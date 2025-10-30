unsigned int __fastcall sub_F441C(_DWORD **a1, int a2, int a3)
{
  _DWORD *v4; // r4
  _DWORD *v6; // r3
  unsigned int result; // r0
  _DWORD *v8; // r0
  int v9; // r3
  _DWORD *v11; // r0
  __int64 v12; // r0

  v4 = *a1;
  if ( *a1 )
  {
    v6 = (_DWORD *)*v4;
    result = v4[1];
    if ( !*v4 )
      goto LABEL_4;
  }
  else
  {
    v11 = sub_93028(0xCu);
    v6 = &unk_47AC74;
    v4 = v11;
    *v11 = &unk_47AC74;
    v11[1] = 0;
    *a1 = v11;
    result = 0;
    v4[2] = 0;
  }
  do
  {
    v6[3] = 0;
    v6 = (_DWORD *)v6[4];
  }
  while ( v6 );
LABEL_4:
  if ( result > 2 )
  {
    if ( result != 3 )
    {
      v12 = sub_94700((int)"complaints.c", 297, "bad switch");
      return sub_F44EC(v12, HIDWORD(v12));
    }
    v8 = (_DWORD *)sub_242FB4(3);
    result = sub_256850(&word_356638, *v8);
  }
  if ( a2 )
  {
    if ( a3 )
      v9 = 2;
    else
      v9 = 1;
    v4[1] = v9;
  }
  else
  {
    v4[1] = 0;
  }
  return result;
}
