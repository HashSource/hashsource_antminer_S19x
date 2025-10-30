int __fastcall sub_7615C(int a1, unsigned int a2, int a3, int a4, int a5)
{
  int v6; // r7
  _DWORD *v10; // r0
  int v11; // r4
  int v12; // r2

  v6 = (unsigned __int16)a1;
  if ( (_WORD)a1 )
    sub_6FC54((int)"./../lib/isc/result.c", 121, 0, "base % 65536 == 0");
  if ( a2 > 0x10000 )
    sub_6FC54((int)"./../lib/isc/result.c", 122, 0, "nresults <= 65536");
  if ( !a3 )
    sub_6FC54((int)"./../lib/isc/result.c", 123, 0, "txt != ((void *)0)");
  v10 = malloc(0x1Cu);
  v11 = (int)v10;
  if ( !v10 )
    return 1;
  *v10 = a1;
  v10[3] = a4;
  v10[1] = a2 - 1 + a1;
  v10[2] = a3;
  v10[4] = a5;
  v10[5] = -1;
  v10[6] = -1;
  if ( pthread_mutex_lock(&stru_108290) )
    sub_705AC("./../lib/isc/result.c", 139, "((pthread_mutex_lock(((&lock))) == 0) ? 0 : 34) == 0");
  v12 = dword_1082AC;
  if ( dword_1082AC )
    *(_DWORD *)(dword_1082AC + 24) = v11;
  else
    dword_1082A8 = v11;
  *(_DWORD *)(v11 + 20) = v12;
  *(_DWORD *)(v11 + 24) = 0;
  dword_1082AC = v11;
  if ( pthread_mutex_unlock(&stru_108290) )
    sub_705AC("./../lib/isc/result.c", 143, "((pthread_mutex_unlock(((&lock))) == 0) ? 0 : 34) == 0");
  return v6;
}
