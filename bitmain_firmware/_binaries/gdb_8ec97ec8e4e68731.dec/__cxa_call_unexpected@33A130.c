void __noreturn _cxa_call_unexpected(void *a1)
{
  __int64 v1; // kr00_8

  if ( *(_BYTE *)a1 == 71
    && *((_BYTE *)a1 + 1) == 78
    && *((_BYTE *)a1 + 2) == 85
    && *((_BYTE *)a1 + 3) == 67
    && *((_BYTE *)a1 + 4) == 67
    && *((_BYTE *)a1 + 5) == 43
    && *((_BYTE *)a1 + 6) == 43
    && *((unsigned __int8 *)a1 + 7) <= 1u )
  {
    v1 = *((_QWORD *)a1 - 3);
    sub_339E78((int)a1);
    sub_33978C((void (__fastcall *)(_DWORD))v1);
  }
  sub_339E78((int)a1);
  sub_3397D4();
}
