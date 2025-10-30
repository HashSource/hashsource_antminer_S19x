int __fastcall sub_49D90(int result)
{
  char *v1; // r5
  char v2[2052]; // [sp+0h] [bp-804h] BYREF

  if ( dword_530F08 && *(_DWORD *)(dword_530F08 + 4) )
  {
    v1 = (char *)result;
    pthread_mutex_lock(&stru_B42BC);
    if ( *(_DWORD *)(dword_530F08 + 64) )
      (*(void (__fastcall **)(char *))(*(_DWORD *)(dword_530F08 + 4) + 24))(v1);
    else
      sub_49D18(v1);
    return pthread_mutex_unlock(&stru_B42BC);
  }
  else if ( (unsigned int)off_AFC24 > 3 )
  {
    strcpy(v2, "Handle is NULL.\n");
    return sub_3AF5C(3, v2, 0, *(int *)"LL.\n");
  }
  return result;
}
