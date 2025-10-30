int __fastcall sub_4BC18(int result)
{
  char *v1; // r5
  char v2[2052]; // [sp+0h] [bp-804h] BYREF

  if ( dword_535D94 && *(_DWORD *)(dword_535D94 + 4) )
  {
    v1 = (char *)result;
    pthread_mutex_lock(&stru_B7038);
    if ( *(_DWORD *)(dword_535D94 + 64) )
      (*(void (__fastcall **)(char *))(*(_DWORD *)(dword_535D94 + 4) + 24))(v1);
    else
      sub_4BB98(v1);
    return pthread_mutex_unlock(&stru_B7038);
  }
  else if ( (unsigned int)dword_B308C > 3 )
  {
    strcpy(v2, "Handle is NULL.\n");
    return sub_3B6AC(3, v2, 0, *(int *)"LL.\n");
  }
  return result;
}
