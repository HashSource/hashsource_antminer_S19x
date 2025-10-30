int __fastcall sub_5FDB0(char *s1)
{
  int v1; // r5
  char *v2; // r2
  int v3; // r4
  int v4; // r3
  int v5; // t1
  int v6; // r10
  const char **v7; // r3
  int v8; // r5
  int v10; // r0
  int v11; // r3
  __int64 v12; // r6
  int v13; // r4

  v1 = (unsigned __int8)*s1;
  if ( *s1 )
  {
    v2 = s1;
    v3 = 0;
    do
    {
      v4 = v1 + (v3 << 6);
      v5 = (unsigned __int8)*++v2;
      v1 = v5;
      v3 = v4 % 227;
    }
    while ( v5 );
    v1 = 4 * v3;
  }
  else
  {
    v3 = (unsigned __int8)*s1;
  }
  v6 = dword_474838;
  v7 = *(const char ***)(dword_474838 + v1);
  v8 = dword_474838 + v1;
  if ( v7 )
  {
    while ( 1 )
    {
      v10 = strcmp(s1, *v7);
      v11 = v3 + 1;
      v12 = 605457945LL * (v3 + 1);
      v13 = (v3 + 1) >> 31;
      if ( !v10 )
        break;
      v3 = v11 - 227 * ((SHIDWORD(v12) >> 5) - v13);
      ++dword_474844;
      v7 = *(const char ***)(v6 + 4 * v3);
      v8 = v6 + 4 * v3;
      if ( !v7 )
        goto LABEL_10;
    }
    ++dword_47483C;
    return v8;
  }
  else
  {
LABEL_10:
    ++dword_474840;
    return v8;
  }
}
