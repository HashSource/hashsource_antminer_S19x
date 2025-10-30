bool __fastcall sub_11A994(int *a1, int a2)
{
  _DWORD *v2; // r5
  int *v3; // r4
  int v5; // r6
  int v6; // r0

  if ( !a1 )
    return 0;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v2 = (_DWORD *)a1[1];
      v3 = a1 + 1;
      goto LABEL_5;
    }
    return 0;
  }
  v3 = a1;
  v2 = (_DWORD *)*a1;
LABEL_5:
  if ( v2 )
    return *v2 == 0;
  v5 = sub_11A914();
  *v3 = v5;
  if ( !v5 )
    return 0;
  v6 = sub_B23B0();
  *(_DWORD *)(v5 + 4) = v6;
  if ( !v6 )
    return 0;
  *(_DWORD *)*v3 = 0;
  return 1;
}
