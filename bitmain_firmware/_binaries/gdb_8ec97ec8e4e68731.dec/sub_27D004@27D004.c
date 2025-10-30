void __fastcall sub_27D004(int a1)
{
  _DWORD *v1; // r4
  _DWORD *v2; // r5
  int v3; // r0

  v1 = (_DWORD *)a1;
  if ( a1 )
  {
    do
    {
      v2 = (_DWORD *)*v1;
      v3 = sub_16F654(a1);
      ((void (__fastcall *)(int, _DWORD, _DWORD))loc_16E7EC)(v3, v1[1], v1[2]);
      free(v1);
      v1 = v2;
    }
    while ( v2 );
  }
}
