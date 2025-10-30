_DWORD *__fastcall sub_3ED54(int a1, int *a2, int a3, int a4)
{
  int v4; // r12
  _DWORD *result; // r0
  int v6; // r1
  _BOOL4 v7; // r2

  if ( a3 != 4 )
    sub_946E0("Thread handle size mismatch: %d vs %zu (from libthread_db)", a3, 4u);
  v4 = *a2;
  result = (_DWORD *)dword_48A4D4;
  if ( dword_48A4D4 )
  {
    do
    {
      if ( result[11] != 2 )
      {
        v6 = result[62];
        v7 = result[7] == a4;
        if ( !v6 )
          v7 = 0;
        if ( v7 && *(_DWORD *)(v6 + 16) == v4 )
          break;
      }
      result = (_DWORD *)result[1];
    }
    while ( result );
  }
  return result;
}
