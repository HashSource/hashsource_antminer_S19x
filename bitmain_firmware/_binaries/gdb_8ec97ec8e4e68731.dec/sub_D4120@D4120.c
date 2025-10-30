void sub_D4120()
{
  _DWORD *v0; // r7
  int v1; // r0

  v0 = (_DWORD *)sub_25B304();
  do
  {
    if ( sub_98F78(&dword_4878EC, &dword_475848) )
      break;
    if ( !sub_22EBBC(0) )
      break;
    if ( sub_23F1C4(dword_4878EC, dword_4878F0, dword_4878F4) )
      break;
    if ( ((int (__fastcall *)(int, int, int))loc_23F1FC)(dword_4878EC, dword_4878F0, dword_4878F4) )
      break;
    v1 = ((int (*)(void))loc_23DBE4)();
  }
  while ( sub_D3D5C((_DWORD *)(v1 + 136)) );
  sub_92640(v0);
}
