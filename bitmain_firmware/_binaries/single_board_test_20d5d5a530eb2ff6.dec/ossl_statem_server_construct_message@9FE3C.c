int __fastcall ossl_statem_server_construct_message(_DWORD *a1, int a2, _DWORD *a3, _DWORD *a4)
{
  int result; // r0
  int (__fastcall *v5)(_DWORD *, int); // r0

  switch ( a1[16] )
  {
    case 0x13:
      result = 1;
      *a3 = 0;
      *a4 = 0;
      break;
    case 0x15:
      result = 1;
      *a3 = dtls_construct_hello_verify_request;
      *a4 = 3;
      break;
    case 0x16:
      result = 1;
      *a3 = tls_construct_server_hello;
      *a4 = 2;
      break;
    case 0x17:
      result = 1;
      *a3 = tls_construct_server_certificate;
      *a4 = 11;
      break;
    case 0x18:
      result = 1;
      *a3 = tls_construct_server_key_exchange;
      *a4 = 12;
      break;
    case 0x19:
      result = 1;
      *a3 = tls_construct_certificate_request;
      *a4 = 13;
      break;
    case 0x1A:
      result = 1;
      *a3 = tls_construct_server_done;
      *a4 = 14;
      break;
    case 0x21:
      result = 1;
      *a3 = tls_construct_new_session_ticket;
      *a4 = 4;
      break;
    case 0x22:
      result = 1;
      *a3 = tls_construct_cert_status;
      *a4 = 22;
      break;
    case 0x23:
      if ( (*(_DWORD *)(*(_DWORD *)(a1[1] + 100) + 48) & 8) != 0 )
        v5 = dtls_construct_change_cipher_spec;
      else
        v5 = tls_construct_change_cipher_spec;
      *a3 = v5;
      *a4 = 257;
      result = 1;
      break;
    case 0x24:
      result = 1;
      *a3 = tls_construct_finished;
      *a4 = 20;
      break;
    case 0x25:
      result = 1;
      *a3 = sub_9DD80;
      *a4 = 8;
      break;
    case 0x28:
      result = 1;
      *a3 = tls_construct_cert_verify;
      *a4 = 15;
      break;
    case 0x2A:
      result = 1;
      *a3 = tls_construct_key_update;
      *a4 = 24;
      break;
    case 0x2E:
      *a3 = 0;
      result = 1;
      *a4 = -1;
      break;
    default:
      sub_95494(a1, 80, 431, 236, (int)"ssl/statem/statem_srvr.c", 1028);
      result = 0;
      break;
  }
  return result;
}
