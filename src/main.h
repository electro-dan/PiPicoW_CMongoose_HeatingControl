#define HTTP_URL "http://0.0.0.0:80"

#define GPIO_HEATING_TRIG 16
#define GPIO_ONEWIRE_DS18B20 22

uint64_t sntp_refresh_counter = 0;
bool sntp_refresh_required = true;

static void blink_timer(void *arg);
static void one_second_timer(void *arg);
static void net_check_timer(void *arg);
static void sntp_timer(void *arg);

static void get_data();
static void save_data();
uint8_t day_of_week(datetime_t *dt);

static void sfn(struct mg_connection *c, int ev, void *ev_data);
static void http_ev_handler(struct mg_connection *c, int ev, void *ev_data);
