int sub_373E8()
{
  char v1[2048]; // [sp+4h] [bp-808h] BYREF
  int i; // [sp+804h] [bp-8h]

  if ( byte_91F58 || byte_87769 || dword_8697C > 5 )
  {
    strcpy(v1, "Work update message received");
    sub_1E4EC(6, v1, 0);
  }
  sub_22308(dword_88080);
  sub_2E59C(&stru_94158, "cgminer.c", "signal_work_update", 5569);
  for ( i = 0; i < dword_953F0; ++i )
    *(_BYTE *)(*(_DWORD *)(dword_930E8 + 4 * i) + 63) = 1;
  return sub_2E704(&stru_94158, "cgminer.c", "signal_work_update", 5576);
}
