int __fastcall sub_1E382C(_DWORD *a1, char *s)
{
  char *v3; // r5
  int result; // r0
  int v5; // r7
  char *v6; // r5
  int v7; // r8
  int v8; // r7
  int v9; // r8
  _DWORD *v10; // r6
  _DWORD *v11; // t1
  int v12; // r4
  unsigned __int8 v13; // r1

  v3 = &s[strlen(s)];
  sprintf(v3, ";cmds:%x,", a1[16]);
  result = strlen(v3);
  v5 = a1[13];
  v6 = &v3[result];
  v7 = a1[14];
  if ( v5 != v7 )
  {
    v8 = v5 - 4;
    v9 = v7 - 4;
    do
    {
      v11 = *(_DWORD **)(v8 + 4);
      v8 += 4;
      v10 = v11;
      sprintf(v6, "X%x,", v11[1]);
      result = strlen(v6);
      v6 += result;
      if ( (int)v11[1] > 0 )
      {
        v12 = 0;
        do
        {
          v13 = *(_BYTE *)(*v10 + v12++);
          result = (int)sub_9915C(v6, v13);
          v6 = (char *)result;
        }
        while ( v10[1] > v12 );
      }
      *v6 = 0;
    }
    while ( v8 != v9 );
  }
  return result;
}
