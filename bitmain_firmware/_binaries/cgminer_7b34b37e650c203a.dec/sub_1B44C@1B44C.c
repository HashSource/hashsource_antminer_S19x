int __fastcall sub_1B44C(int a1, int a2, int a3, int a4)
{
  char *v6; // r1
  int v7; // r8
  const char *v8; // r7
  const char *v9; // r0
  const char *v10; // r9
  const char *v11; // r0
  char **v12; // r0
  int result; // r0

  sub_18AD4((unsigned int *)a1, 78, 0, 0, a4);
  v6 = ",\"COIN\":[";
  if ( !a4 )
    v6 = "COIN,";
  v7 = sub_15B00((unsigned int *)a1, v6);
  v8 = sub_18850(0, "Hash Method", 2, "sha256", 0);
  if ( pthread_mutex_lock(&stru_74504) )
    sub_17604("minecoin", 3633);
  if ( pthread_rwlock_rdlock(&stru_7451C) )
    sub_175A0("minecoin", 3633);
  if ( pthread_mutex_unlock(&stru_74504) )
    sub_17668("minecoin", 3633);
  v9 = sub_18850((int)v8, "Current Block Time", 15, (const char *)&dword_755F0, 1);
  v10 = sub_18850((int)v9, "Current Block Hash", 1, byte_73324, 1);
  if ( pthread_rwlock_unlock(&stru_7451C) )
    sub_176CC("minecoin", 3636);
  off_67ED8();
  v11 = sub_18850((int)v10, "LP", 14, &byte_74502, 0);
  v12 = (char **)sub_18850((int)v11, "Network Difficulty", 24, (const char *)&dbl_68748, 1);
  result = sub_17D00((unsigned int *)a1, v12, a4, 0);
  if ( (a4 & v7) != 0 )
    *(_BYTE *)(a1 + 13) = 1;
  return result;
}
