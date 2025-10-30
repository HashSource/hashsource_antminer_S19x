int sub_363D0()
{
  char v1[2048]; // [sp+4h] [bp-808h] BYREF
  int i; // [sp+804h] [bp-8h]

  if ( byte_90DC0 || byte_865D1 || dword_857E4 > 5 )
  {
    strcpy(v1, "Work update message received");
    sub_1DB6C(6, v1, 0);
  }
  sub_21AC0(dword_86EE8);
  sub_2D554(&stru_92FC0, "cgminer.c", "signal_work_update", 5569);
  for ( i = 0; i < dword_94258; ++i )
    *(_BYTE *)(*(_DWORD *)(dword_91F50 + 4 * i) + 63) = 1;
  return sub_2D6C8(&stru_92FC0, "cgminer.c", "signal_work_update", 5576);
}
