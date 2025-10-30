int __fastcall sub_41FD4(int a1, int a2, int a3, int a4)
{
  char *v6; // r1
  int v7; // r8
  const char *v8; // r7
  const char *v9; // r0
  const char *v10; // r9
  const char *v11; // r0
  char **v12; // r0
  int result; // r0

  sub_3F65C((unsigned int *)a1, 78, 0, 0, a4);
  v6 = ",\"COIN\":[";
  if ( !a4 )
    v6 = "COIN,";
  v7 = sub_3C770((unsigned int *)a1, v6);
  v8 = sub_3F3D8(0, "Hash Method", 2, "sha256", 0);
  if ( pthread_mutex_lock(&stru_244084) )
    sub_3E190("minecoin", 3633);
  if ( pthread_rwlock_rdlock(&stru_24409C) )
    sub_3E12C("minecoin", 3633);
  if ( pthread_mutex_unlock(&stru_244084) )
    sub_3E1F4("minecoin", 3633);
  v9 = sub_3F3D8((int)v8, "Current Block Time", 15, (const char *)&dword_245170, 1);
  v10 = sub_3F3D8((int)v9, "Current Block Hash", 1, byte_242EA4, 1);
  if ( pthread_rwlock_unlock(&stru_24409C) )
    sub_3E258("minecoin", 3636);
  off_9E444();
  v11 = sub_3F3D8((int)v10, "LP", 14, &byte_244082, 0);
  v12 = (char **)sub_3F3D8((int)v11, "Network Difficulty", 24, (const char *)&dbl_9ED90, 1);
  result = sub_3E88C((unsigned int *)a1, v12, a4, 0);
  if ( (a4 & v7) != 0 )
    *(_BYTE *)(a1 + 13) = 1;
  return result;
}
