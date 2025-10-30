bool __fastcall sub_41A4C(pthread_mutex_t *a1)
{
  char v4[4]; // [sp+10h] [bp-804h] BYREF

  if ( byte_91F58 || byte_87769 || dword_8697C > 5 )
  {
    snprintf(v4, 0x800u, "Testing pool %d stratum %s", a1->__lock, (const char *)a1[24].__lock);
    sub_1E4EC(6, v4, 0);
  }
  return (unsigned __int8)sub_22720((char *)a1[24].__lock, (char **)&a1[25].__nusers, (char **)&a1[24].__owner) == 1
      && (unsigned __int8)sub_2A5C4(a1) == 1;
}
