int __fastcall sub_454FC(int *a1, float *a2, _DWORD *a3)
{
  unsigned __int8 *v5; // r8
  int v6; // r4
  float *v7; // r3
  float v8; // s16
  double v9; // d8
  char v13[52]; // [sp+18h] [bp-34h] BYREF

  if ( *(int *)(dword_705300 + 4) > 0 )
  {
    v5 = (unsigned __int8 *)&unk_704F1B;
    v6 = 0;
    do
    {
      if ( *++v5 )
      {
        if ( *(_BYTE *)(*a1 + v6) )
        {
          *(_BYTE *)(*a1 + v6) = 0;
          v7 = (float *)(*a3 + 4 * v6);
          v8 = *v7;
          *v7 = *a2;
          sub_1E938(v13, 0x30u);
          printf("%s ", v13);
          v9 = v8;
          printf(
            "%s : bad asic idx %d, reset[%4.2f] to last[%4.2f]\n\n",
            "set_matrix_state",
            v6,
            v9,
            *(float *)(*a3 + 4 * v6));
          snprintf(
            byte_6438DC,
            0x100u,
            "bad asic idx %d, reset[%4.2f] to last[%4.2f]\n",
            v6,
            v9,
            *(float *)(*a3 + 4 * v6));
          sub_3CCE0((int)byte_6438DC);
        }
        else
        {
          sub_1E938(v13, 0x30u);
          printf("%s ", v13);
          printf("%s : bad asic idx %d,last[%4.2f]\n\n", "set_matrix_state", v6, *a3 + 4 * v6, *(float *)(*a3 + 4 * v6));
          snprintf(byte_6439DC, 0x100u, "bad asic idx %d,last[%4.2f]\n", v6, *(float *)(4 * v6 + *a3));
          sub_3CCE0((int)byte_6439DC);
        }
      }
      ++v6;
      ++a2;
    }
    while ( *(_DWORD *)(dword_705300 + 4) > v6 );
  }
  return sub_452B4(*a1);
}
