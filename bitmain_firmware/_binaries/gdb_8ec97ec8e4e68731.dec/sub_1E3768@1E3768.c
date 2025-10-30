int __fastcall sub_1E3768(int a1, char *s, int a3)
{
  char *v5; // r0
  char *v6; // r5
  int result; // r0
  int v8; // r7
  int v9; // r8
  int v10; // r7
  int v11; // r8
  _DWORD *v12; // r6
  _DWORD *v13; // t1
  int v14; // r4
  unsigned __int8 v15; // r1

  v5 = &s[strlen(s)];
  v6 = v5 + 1;
  result = sub_93170(v5, a3 - (_DWORD)v5, "%s", ";");
  v8 = *(_DWORD *)(a1 + 40);
  v9 = *(_DWORD *)(a1 + 44);
  if ( v8 != v9 )
  {
    v10 = v8 - 4;
    v11 = v9 - 4;
    do
    {
      v13 = *(_DWORD **)(v10 + 4);
      v10 += 4;
      v12 = v13;
      sub_93170(v6, a3 - (_DWORD)v6, "X%x,", v13[1]);
      result = strlen(v6);
      v6 += result;
      if ( (int)v13[1] > 0 )
      {
        v14 = 0;
        do
        {
          v15 = *(_BYTE *)(*v12 + v14++);
          result = (int)sub_9915C(v6, v15);
          v6 = (char *)result;
        }
        while ( v12[1] > v14 );
      }
      *v6 = 0;
    }
    while ( v11 != v10 );
  }
  return result;
}
