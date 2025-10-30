bool __fastcall sub_9BE38(_DWORD *a1)
{
  _DWORD *v2; // r2
  int v3; // r1
  int v4; // r3
  int v5; // r2
  int v6; // r5
  int v7; // r0
  int v8; // r3

  v2 = *(_DWORD **)(a1[1] + 100);
  if ( a1[7] )
  {
    v3 = v2[6];
    v4 = *(_DWORD *)(a1[1] + 100);
    v5 = v2[7];
  }
  else
  {
    v3 = v2[8];
    v4 = *(_DWORD *)(a1[1] + 100);
    v5 = v2[9];
  }
  v6 = a1[31];
  v7 = (*(int (__fastcall **)(_DWORD *, int, int, int))(v4 + 20))(a1, v3, v5, v6 + 388);
  v8 = a1[31];
  *(_DWORD *)(v6 + 516) = v7;
  return *(_DWORD *)(v8 + 516) != 0;
}
