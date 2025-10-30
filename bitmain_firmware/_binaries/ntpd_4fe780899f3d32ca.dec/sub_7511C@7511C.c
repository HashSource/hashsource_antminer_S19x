int __fastcall sub_7511C(int a1, unsigned int a2, int a3, int a4, int a5)
{
  _DWORD *v9; // r0
  int v10; // r4
  int result; // r0
  int v12; // r2

  if ( (_WORD)a1 )
    sub_6ECC0((int)"./../lib/isc/result.c", 121, 0, "base % 65536 == 0");
  if ( a2 > 0x10000 )
    sub_6ECC0((int)"./../lib/isc/result.c", 122, (unsigned __int16)a1, "nresults <= 65536");
  if ( !a3 )
    sub_6ECC0((int)"./../lib/isc/result.c", 123, 0, "txt != ((void *)0)");
  v9 = malloc(0x1Cu);
  v10 = (int)v9;
  if ( !v9 )
    return 1;
  *v9 = a1;
  v9[1] = a2 - 1 + a1;
  v9[2] = a3;
  v9[3] = a4;
  v9[4] = a5;
  v9[5] = -1;
  v9[6] = -1;
  if ( pthread_mutex_lock(&stru_10726C) )
    sub_6F61C("./../lib/isc/result.c", 139, "((pthread_mutex_lock(((&lock))) == 0) ? 0 : 34) == 0");
  v12 = dword_107288;
  if ( dword_107288 )
    *(_DWORD *)(dword_107288 + 24) = v10;
  else
    dword_107284 = v10;
  *(_DWORD *)(v10 + 20) = v12;
  *(_DWORD *)(v10 + 24) = 0;
  dword_107288 = v10;
  result = pthread_mutex_unlock(&stru_10726C);
  if ( result )
    sub_6F61C("./../lib/isc/result.c", 143, "((pthread_mutex_unlock(((&lock))) == 0) ? 0 : 34) == 0");
  return result;
}
