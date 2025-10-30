_DWORD *__fastcall sub_24B3B0(_DWORD *a1)
{
  _DWORD *v2; // r7
  int **v3; // r0
  _DWORD *v4; // r4
  int **v5; // r6
  int v6; // r5

  if ( dword_48A8C0 == -1 )
    sub_946E0("No current trace frame.");
  v2 = sub_D1908(dword_48A8C0);
  if ( !v2 )
    sub_946E0("No known tracepoint matches 'current' tracepoint #%d.", dword_48A8C0);
  v3 = (int **)sub_1DDBBC();
  v4 = (_DWORD *)v2[7];
  v5 = v3;
  if ( v4 )
  {
    do
    {
      v6 = v4[13];
      if ( v6 == sub_1DFB3C(v5) )
      {
        *a1 = 0;
        return v4;
      }
      v4 = (_DWORD *)*v4;
    }
    while ( v4 );
    v4 = (_DWORD *)v2[7];
  }
  *a1 = 1;
  return v4;
}
