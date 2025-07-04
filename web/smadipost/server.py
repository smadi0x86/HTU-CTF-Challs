from flask import Flask, render_template, request, make_response, send_file

app = Flask(__name__)

@app.route('/', methods=['GET'])
def display_home():
    return make_response(render_template('home.html'))

@app.route("/", methods=['POST'])
def display_flag():
    return make_response(render_template('flag.html'))

@app.route("/robots.txt", methods=['GET'])
def robots():
    return send_file("templates/robots.txt", mimetype='text/plain')

@app.route("/ttxtyy", methods=['GET'])
def auth():
    return

@app.errorhandler(Exception)
def handle_error(error):
    print(f"Error: {error}")
    return make_response(render_template('home.html'))


if __name__ == "__main__":
    app.run(debug=True, host='0.0.0.0', port=1337, threaded=True)