int __fastcall sub_A728C(_DWORD *a1)
{
  int result; // r0
  int v3; // r5
  int (__fastcall *v4)(_DWORD *, _DWORD); // r3
  int v5; // r2
  unsigned int v6; // r3
  int v7; // r3

  result = (int)sub_A718C((int)a1);
  if ( result )
  {
    v3 = a1[32];
    v4 = *(int (__fastcall **)(_DWORD *, _DWORD))(v3 + 404);
    if ( v4 )
    {
      *(_DWORD *)(v3 + 396) = v4(a1, *(_DWORD *)(v3 + 396));
    }
    else
    {
      v7 = 60000000;
      if ( (unsigned int)(2 * *(_DWORD *)(v3 + 396)) <= 0x3938700 )
        v7 = 2 * *(_DWORD *)(v3 + 396);
      *(_DWORD *)(v3 + 396) = v7;
    }
    if ( sub_A7204(a1) < 0 )
    {
      return -1;
    }
    else
    {
      v5 = a1[32];
      v6 = *(_DWORD *)(v5 + 376) + 1;
      if ( v6 > 2 )
        v6 = 1;
      *(_DWORD *)(v5 + 376) = v6;
      sub_A7050((int)a1);
      return sub_9AB60(a1);
    }
  }
  return result;
}
