int __fastcall sub_CE288(int a1)
{
  int result; // r0
  int v3; // r2
  int v4; // r3
  int v5; // r0
  int v6; // r5
  int v7; // r2
  int v8; // r3
  const char *v9; // r0
  int v10; // r2
  int v11; // r3
  const char *v12; // r6
  int v13; // r2
  int v14; // r3

  result = sub_2573F0(a1);
  if ( !result )
  {
    v5 = sub_257380(a1, &word_356638, v3, v4);
    result = sub_2400DC(v5);
    if ( result )
    {
      v6 = ((int (*)(void))loc_23DBE4)();
      sub_257380(a1, "Thread ", v7, v8);
      v9 = (const char *)sub_240128(v6);
      sub_257694(a1, "thread-id", "%s", v9);
      v12 = *(const char **)(v6 + 32);
      if ( v12 || (v12 = (const char *)sub_230990(v6)) != 0 )
      {
        sub_257380(a1, " \"", v10, v11);
        sub_257694(a1, "name", "%s", v12);
        sub_257380(a1, "\"", v13, v14);
      }
      return sub_257380(a1, " hit ", v10, v11);
    }
  }
  return result;
}
