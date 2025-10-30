int __fastcall sub_2A324(int a1, int a2, unsigned int a3, int a4)
{
  int v8; // r6
  int result; // r0
  int v10; // r11

  v8 = 10;
  while ( 1 )
  {
    sub_4A804(3);
    pthread_mutex_lock(&stru_138630);
    if ( dword_241D70 )
      break;
    pthread_mutex_unlock(&stru_138630);
LABEL_4:
    result = sub_4A804(300);
    if ( !--v8 )
      return result;
  }
  v10 = sub_2A0A4(a1, a2, a3, (_DWORD *)a4);
  result = pthread_mutex_unlock(&stru_138630);
  if ( !v10 )
    goto LABEL_4;
  *(_BYTE *)(a4 + 4) = 1;
  return result;
}
