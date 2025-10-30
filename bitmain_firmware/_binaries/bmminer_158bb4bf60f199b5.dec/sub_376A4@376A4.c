int __fastcall sub_376A4(int result)
{
  char *v1; // r5
  char v2[2052]; // [sp+0h] [bp-804h] BYREF

  if ( dword_1AEA78 && *(_DWORD *)(dword_1AEA78 + 4) )
  {
    v1 = (char *)result;
    pthread_mutex_lock(&stru_138630);
    if ( *(_DWORD *)(dword_1AEA78 + 232) )
      (*(void (__fastcall **)(char *))(*(_DWORD *)(dword_1AEA78 + 4) + 24))(v1);
    else
      sub_3762C(v1);
    return pthread_mutex_unlock(&stru_138630);
  }
  else if ( (unsigned int)dword_9E31C > 3 )
  {
    strcpy(v2, "Handle is NULL.\n");
    return sub_47AB4(3, v2, 0);
  }
  return result;
}
