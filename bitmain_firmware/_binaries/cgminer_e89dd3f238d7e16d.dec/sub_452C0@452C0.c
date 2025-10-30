int __fastcall sub_452C0(int a1, int a2, int a3)
{
  char v7[2048]; // [sp+10h] [bp-804h] BYREF

  if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
  {
    snprintf(v7, 0x800u, "Thread %d being disabled", a2);
    sub_1DB6C(4, v7, 0);
  }
  *(_QWORD *)(*(_DWORD *)(a1 + 36) + 48) = 0;
  if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
  {
    strcpy(v7, "Waiting on sem in miner thread");
    sub_1DB6C(7, v7, 0);
  }
  sub_2AB08((sem_t *)(a1 + 16), "cgminer.c", "mt_disable", 9229);
  if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
  {
    snprintf(v7, 0x800u, "Thread %d being re-enabled", a2);
    sub_1DB6C(4, v7, 0);
  }
  return (*(int (__fastcall **)(int))(a3 + 92))(a1);
}
